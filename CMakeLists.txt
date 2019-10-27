# ----------------------------------------------------------------------------------------------------
# project-level configuration and setup
# ----------------------------------------------------------------------------------------------------

# NB do not need quotes when setting variables like set(A ${B}/abc); it's OK if B contains spaces.

cmake_minimum_required(VERSION 3.5)
project(SuperCollider)

# project version
include(SCVersion.txt)
set(PROJECT_VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}${PROJECT_VERSION_PATCH}")
message(STATUS "SuperCollider Version: ${PROJECT_VERSION}")
message(STATUS "Building from branch ${GIT_BRANCH}, commit hash is ${GIT_COMMIT_HASH}")

if(CMAKE_SYSTEM_NAME MATCHES "^(Linux|FreeBSD|DragonFly|OpenBSD|NetBSD)$")
    set(system_is_unixy 1)
    set(gnu_style_install 1)
endif()

# disable no build type
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    message(FATAL_ERROR "Please specify a build type by rerunning this step with -DCMAKE_BUILD_TYPE=<type>")
endif()

# disable in-source build
if (CMAKE_SOURCE_DIR STREQUAL CMAKE_BINARY_DIR)
    message(FATAL_ERROR "In-source builds are not supported; build out-of-source or in a subdirectory whose name begins with 'build'")
endif()

# installation & uninstallation
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT AND (WIN32 OR APPLE))
    message(STATUS "No install prefix set, installing to ${CMAKE_BINARY_DIR}/Install")
    set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/Install CACHE STRING "Cmake install path" FORCE)
endif()

configure_file(cmake_modules/cmake_uninstall.cmake.in cmake_uninstall.cmake IMMEDIATE @ONLY)
add_custom_target(uninstall "${CMAKE_COMMAND}" -P cmake_uninstall.cmake)

# CMake modules
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake_modules ${CMAKE_MODULE_PATH})

include(CheckIncludeFiles)
include(FinalFile)
include(CMakeDependentOption)
include(CheckCXXCompilerFlag)

# TODO add option for macos
if(gnu_style_install)
    include(GNUInstallDirs)
endif()

if(APPLE)
    include(MacAppFolder)
    set(ide_name ${scappbundlename})
else()
    set(ide_name scide)
endif()

include(CTest)
enable_testing()

# ----------------------------------------------------------------------------------------------------
# CMake options
# ----------------------------------------------------------------------------------------------------

# TODO format
option(NOVA_SIMD           "Build with nova-simd support." ON)
option(FINAL_BUILD         "Build as single source file." OFF)
option(FFT_GREEN           "Use internal 'Green' FFT lib rather than FFTW. (Not recommended.)" OFF)
option(LIBSCSYNTH          "Compile libscsynth as shared library" OFF)
option(INSTALL_HELP        "Install help docs and examples along with the software" ON)
option(SC_DOC_RENDER       "Pre-render SCDoc documentation. (For putting online, etc)" OFF)
option(SC_QT               "Build SuperCollider with Qt GUI features" ON)
option(SC_NO_CCACHE "By default, ccache will be used if found; set this to disable it" OFF)
option(NO_X11              "Disables server plugins requiring the X11 library (for UI-less builds)" OFF)
option(ENABLE_TESTSUITE    "Compile testsuite." ON)
option(SUPERNOVA           "Build with supernova as optional audio synthesis server" OFF)
option(SN_MEMORY_DEBUGGING "Build supernova for memory debugging (disable memory pools).")
option(SC_MEMORY_DEBUGGING "Build sclang&scsynth for memory debugging (disable memory pools).")
option(GC_SANITYCHECK      "Enable sanity checks in the sclang garbage collector.")
option(NO_LIBSNDFILE       "Disable soundfile functionality. (Not recommended.)" OFF)
option(NO_AVAHI            "Disable Avahi support. (Not recommended.)" ${WIN32})
option(NO_GPL3             "Disable GPL3 code, for pure-GPL2 situations. (Not recommended.)" OFF)
option(SCLANG_SERVER       "Build with internal server." ON)
# TODO support on clang & msvc /ltcg
option(LTO                 "Use link time optimization (experimental); currently only supported for gcc" OFF)
option(SYSTEM_BOOST        "Use boost libraries from system" OFF)
option(SYSTEM_YAMLCPP      "Use yaml-cpp library from system" OFF)
option(FORTIFY             "Define -D_FORTIFY_SOURCE=2 to check for programming errors" OFF)
option(SC_ABLETON_LINK     "Build with Ableton Link support" ON)
# TODO msvc support
option(NATIVE "Optimize binary for this architecture; binaries may not run on other machines. Currently only supported for clang and gcc" OFF)
option(SC_HIDAPI "Build with HID support" ON)
option(SSE "Compile with support for SSE instructions; no effect on ARM systems like Raspberry Pi" ON)
option(SSE2 "Compile with support for SSE2 instructions; no effect on ARM systems like Raspberry Pi" ON)

# Only allow SC_IDE if SC_QT is ON
cmake_dependent_option(SC_IDE              "Build Qt IDE." ON SC_QT OFF)

set(AUDIOAPI default CACHE STRING "Audio API to use (one of {default,coreaudio,jack,portaudio})")

if(WIN32)
    if(CMAKE_SIZEOF_VOID_P EQUAL 8)
        set(win_arch x64)
    else()
        set(win_arch x86)
    endif()
    set(CMAKE_LIBRARY_ARCHITECTURE ${win_arch} CACHE STRING "Architecture of target system")
endif(WIN32)

# ----------------------------------------------------------------------------------------------------
# Library, dependency, and tool configuration
# ----------------------------------------------------------------------------------------------------

# SC_Version.hpp
configure_file(common/SC_Version.hpp.in common/SC_Version.hpp)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/common)

# pthreads
if(NOT WIN32)
    find_package(Pthreads REQUIRED)
    include_directories(${PTHREADS_INCLUDE_DIR})
endif()

# boost
if(SYSTEM_BOOST)
    # TODO simplify/provide BOOST_COMPONENTS
    set(Boost_USE_MULTITHREADED ON)
    find_package(Boost 1.67.0 REQUIRED COMPONENTS thread system filesystem program_options regex test_exec_monitor)

    # we're specifically setting up the boost libraries here, so we can name them
    add_library(boost_thread_lib SHARED IMPORTED)
    set_property(TARGET boost_thread_lib PROPERTY IMPORTED_LOCATION ${Boost_THREAD_LIBRARY})
    add_library(boost_system_lib SHARED IMPORTED)
    set_property(TARGET boost_system_lib PROPERTY IMPORTED_LOCATION ${Boost_SYSTEM_LIBRARY})
    add_library(boost_filesystem_lib SHARED IMPORTED)
    set_property(TARGET boost_filesystem_lib PROPERTY IMPORTED_LOCATION ${Boost_FILESYSTEM_LIBRARY})
    add_library(boost_program_options_lib SHARED IMPORTED)
    set_property(TARGET boost_program_options_lib PROPERTY IMPORTED_LOCATION ${Boost_PROGRAM_OPTIONS_LIBRARY})
    add_library(boost_regex_lib SHARED IMPORTED)
    set_property(TARGET boost_regex_lib PROPERTY IMPORTED_LOCATION ${Boost_REGEX_LIBRARY})
    add_library(boost_test_exec_monitor_lib SHARED IMPORTED)
    set_property(TARGET boost_test_exec_monitor_lib PROPERTY IMPORTED_LOCATION ${Boost_TEST_EXEC_MONITOR_LIBRARY})

    set(boost_include_dirs ${Boost_INCLUDE_DIRS})
else()
    set(boost_include_dirs external_libraries/boost)
endif()

# yamlcpp
if(SYSTEM_YAMLCPP)
    find_package(YamlCpp REQUIRED)
else()
    set(YAMLCPP_LIBRARY yaml)
endif()

# ccache: always use it unless explicitly told not to
find_program(ccache_program ccache)
if(ccache_program AND NOT SC_NO_CCACHE)
    message(STATUS "Using ccache to speed up build process; re-run this step with -DSC_NO_CCACHE=1 to disable ccache")
    if(CMAKE_GENERATOR STREQUAL "Xcode")
        # workaround for using ccache with Xcode generator
        # thanks to Craig Scott: https://crascit.com/2016/04/09/using-ccache-with-cmake/
        # Set up wrapper scripts
        set(SC_LAUNCH_C_SCRIPT   "${CMAKE_BINARY_DIR}/launch-c")
        set(SC_LAUNCH_CXX_SCRIPT "${CMAKE_BINARY_DIR}/launch-cxx")

        configure_file(cmake_modules/launch-c.in   launch-c)
        configure_file(cmake_modules/launch-cxx.in launch-cxx)
        execute_process(COMMAND chmod a+rx "${SC_LAUNCH_C_SCRIPT}" "${SC_LAUNCH_CXX_SCRIPT}")

        # Set Xcode project attributes to route compilation and linking through our scripts
        set(CMAKE_XCODE_ATTRIBUTE_CC         "${SC_LAUNCH_C_SCRIPT}")
        set(CMAKE_XCODE_ATTRIBUTE_CXX        "${SC_LAUNCH_CXX_SCRIPT}")
        set(CMAKE_XCODE_ATTRIBUTE_LD         "${SC_LAUNCH_C_SCRIPT}")
        set(CMAKE_XCODE_ATTRIBUTE_LDPLUSPLUS "${SC_LAUNCH_CXX_SCRIPT}")
    else()
        set(CMAKE_C_COMPILER_LAUNCHER   "${ccache_program}")
        set(CMAKE_CXX_COMPILER_LAUNCHER "${ccache_program}")
    endif()
endif()

# ----------------------------------------------------------------------------------------------------
# Compiler Options
# ----------------------------------------------------------------------------------------------------

# Compiler version checks
if(MINGW AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 5.3)
    message(FATAL_ERROR "MinGW >= 5.3 is required")
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_LESS 4.8)
    message(FATAL_ERROR "gcc >= 4.8 is required")
endif()

# C++ standard
set(CMAKE_CXX_STANDARD 11)

# Compile options and definitions
add_compile_options(
    $<$<CXX_COMPILER_ID:GNU>:-fno-math-errno>
    $<$<CXX_COMPILER_ID:Intel>:
        -simd
        -diag-disable 170 # pointer points outside of underlying object ... used heavily in sclang
        -diag-disable 279 # controlling expression is constant
    >

    $<$<CXX_COMPILER_ID:MSVC>:
        /wd4018 # signed/unsigned mismatch
        /wd4102 # unreferenced label
        /wd4267 # conversion from 'size_t' to 'int', possible loss of data
        /wd4244 # conversion from '__int64' to 'int', possible loss of data
        /wd4305 # '=' : truncation from 'double' to 'float'
        /wd4309 # '=' : truncation of constant value
        /wd4800 # forcing value to bool 'true' or 'false' (performance warning)
        /wd4996 # The POSIX name for this item is deprecated.
    >

    $<$<BOOL:MINGW>:-mstackrealign>
)

add_definitions(
    $<$<BOOL:UNIX>:-DSC_DATA_DIR="${CMAKE_INSTALL_PREFIX}/share/SuperCollider">
    $<$<BOOL:WIN32>:-DWIN32_LEAN_AND_MEAN -DNOMINMAX -D_WIN32_WINNT=0x0600
        -DBOOST_DATE_TIME_NO_LIB -DBOOST_ALL_NO_LIB>
    # _ENABLE_ATOMIC_ALIGNMENT_FIX prevents the build from breaking when VS2015 update 2 upwards are used
    # see http://boost.2283326.n4.nabble.com/lockfree-ENABLE-ATOMIC-ALIGNMENT-FIX-for-VS-2015-Update-2-td4685955.html
    $<$<BOOL:MSVC>:-D_CRT_SECURE_NO_WARNINGS -D_SCL_SECURE_NO_WARNINGS -D_ENABLE_ATOMIC_ALIGNMENT_FIX>
    $<$<BOOL:SC_MEMORY_DEBUGGING>:-DDISABLE_MEMORY_POOLS -DENABLE_MEMORY_CHECKS>
    $<$<BOOL:NO_GPL3>:-DNO_GPL3>

    -DBOOST_CHRONO_HEADER_ONLY -DBOOST_NO_AUTO_PTR
)

# More complex specifics
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    if(APPLE)
        add_definitions(-D_REENTRANT)
    elseif(CYGWIN OR NOT WIN32)
        add_definitions(-pthread)
    endif()

    # support for building on Raspberry Pi 1/2/3 and BBB
    if(CMAKE_SYSTEM_PROCESSOR STREQUAL "armv7l")
        add_compile_options(-mfloat-abi=hard -mfpu=neon)
    elseif(CMAKE_SYSTEM_PROCESSOR STREQUAL "armv6l")
        add_compile_options(-mfloat-abi=hard -mfpu=vfp -march=armv6 -mtune=arm1176jzf-s)
    endif()
elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Intel")
    check_cxx_compiler_flag(-mia32 CXX_SUPPORTS_SSE)
    if(SSE AND CXX_SUPPORTS_SSE)
        add_definitions(-mia32)
    endif()
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES "^(GNU|Clang|AppleClang)$")
    check_cxx_compiler_flag(-msse CXX_SUPPORTS_SSE)
    check_cxx_compiler_flag(-msse2 CXX_SUPPORTS_SSE2)

    if(SSE AND CXX_SUPPORTS_SSE)
        add_compile_options(-msse)
        # TODO audit
        if(NOT APPLE AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
            add_compile_options(-mfpmath=sse)
        endif()
    endif()

    if(SSE2 AND CXX_SUPPORTS_SSE2)
        add_compile_options(-msse2)
    endif()

    add_compile_options(
        $<$<BOOL:NATIVE>:-march=native>
        -fvisibility=hidden
    )
    add_definitions($<$<BOOL:FORTIFY>:-D_FORTIFY_SOURCE=2)

    # TODO audit. let users choose or don't use libc++
    if(NOT CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        add_compile_options(-stdlib=libc++)
    endif()
endif()

#############################################
# subdirectories
add_subdirectory(tools)
add_subdirectory(external_libraries)

# TODO audit all four, used in editors
file(GLOB_RECURSE ClassLibrary SCClassLibrary/*sc)
file(GLOB_RECURSE HelpSource   HelpSource/*)
file(GLOB_RECURSE Sounds       sounds/*)
file(GLOB_RECURSE Examples     examples/*)

add_subdirectory(server)
add_subdirectory(lang)
add_subdirectory(platform)
add_subdirectory(editors)

if(gnu_style_install)
    install(DIRECTORY include/common include/plugin_interface include/server include/lang
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/SuperCollider
        FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp"
    )
    install(FILES SCVersion.txt
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/SuperCollider
    )
endif()

if (WIN32)
    set(auxresourcesdir SuperCollider CACHE STRING "Resources directory")
elseif(APPLE)
    set(auxresourcesdir ${scappbundlename} CACHE STRING "Resources directory")
else()
    set(auxresourcesdir share/SuperCollider CACHE STRING "Resources directory")
endif()

if(NOT SC_QT)
	set(SCCLASSLIB_EXCLUDE_REGEX "${SCCLASSLIB_EXCLUDE_REGEX}|GUI")
endif()

if(NOT SC_ABLETON_LINK)
	set(SCCLASSLIB_EXCLUDE_REGEX "${SCCLASSLIB_EXCLUDE_REGEX}|Ableton")
endif()

if(NOT APPLE)
    install(DIRECTORY SCClassLibrary
        DESTINATION ${auxresourcesdir}
        REGEX ${SCCLASSLIB_EXCLUDE_REGEX} EXCLUDE
        PATTERN "*~" EXCLUDE
        PATTERN "*#" EXCLUDE
    )

    install(DIRECTORY sounds DESTINATION ${auxresourcesdir})
endif()

install(DIRECTORY examples DESTINATION ${auxresourcesdir})

set(AdditionalInstallFiles
    README.md
    CHANGELOG.md
    COPYING
    AUTHORS
)

if (WIN32)
    list(APPEND AdditionalInstallFiles README_WINDOWS.md)
elseif(APPLE)
    list(APPEND AdditionalInstallFiles README_MACOS.md)
else()
    list(APPEND AdditionalInstallFiles README_LINUX.md)
endif()

install(FILES ${AdditionalInstallFiles} DESTINATION ${auxresourcesdir})

if(INSTALL_HELP AND NOT APPLE)
    install(DIRECTORY HelpSource
        DESTINATION ${auxresourcesdir}
        REGEX ${SCCLASSLIB_EXCLUDE_REGEX} EXCLUDE
        PATTERN "*~" EXCLUDE
        PATTERN "*#" EXCLUDE
    )
endif()


#############################################
#
# build scdoc help files
#
if(SC_DOC_RENDER)
    file(GLOB_RECURSE SCDocSources RELATIVE HelpSource .*[^~])
    file(GLOB_RECURSE SCDocClasses RELATIVE SCClassLibrary/SCDoc *.sc)

    file(WRITE render_doc_sclang_config.yml "# minimal sclang configuration for rendering documentation
includePaths:
  - ${CMAKE_CURRENT_SOURCE_DIR}/SCClassLibrary
  - ${CMAKE_CURRENT_SOURCE_DIR}/platform/disable_startup_files # short-circuits any startup file loading
")

    add_custom_target(doc
        COMMAND sclang
            -a -l render_doc_sclang_config.yml
            platform/renderAllHelp.scd ${CMAKE_CURRENT_SOURCE_DIR}/HelpSource ${CMAKE_CURRENT_BINARY_DIR}/RenderedHelp
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        DEPENDS sclang ${SCDocSources} ${SCDocClasses})
endif()

set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES RenderedHelp)

# ----------------------------------------------------------------------------------------------------
# CPack
# ----------------------------------------------------------------------------------------------------

set(CPACK_PACKAGE_VERSION_MAJOR ${PROJECT_VERSION_MAJOR})
set(CPACK_PACKAGE_VERSION_MINOR ${PROJECT_VERSION_MINOR})
set(CPACK_PACKAGE_VERSION_PATCH ${PROJECT_VERSION_PATCH})

if(APPLE)
    set(CPACK_GENERATOR "DragNDrop")
    set(CPACK_DMG_FORMAT "UDBZ")
    set(CPACK_DMG_VOLUME_NAME "${scappbundlename}")
    set(CPACK_SYSTEM_NAME "OSX")
    set(CPACK_DMG_DS_STORE "${CMAKE_SOURCE_DIR}/package/ds_store")
    set(CPACK_DMG_BACKGROUND_IMAGE "${CMAKE_SOURCE_DIR}/package/background.png")
    set(CPACK_PACKAGE_ICON "${CMAKE_SOURCE_DIR}/icons/sc_ide.icns")
endif()

if(NOT WIN32) # We define a custom 'package' target in platform/windows/CMakeLists.txt
    include(CPack)
endif()

# ----------------------------------------------------------------------------------------------------
# Miscellaneous
# ----------------------------------------------------------------------------------------------------

if(ENABLE_TESTSUITE)
    add_subdirectory(testsuite)
endif()

mark_as_advanced(AVAHI_LIBRARIES AVAHI_INCLUDE_DIRS AVAHI_INCLUDE_DIR AVAHI_LIBRARY-COMMON AVAHI_LIBRARY-CLIENT)
mark_as_advanced(DL)
mark_as_advanced(EMACS_EXECUTABLE)
mark_as_advanced(FFTW3F_INCLUDE_DIR FFTW3F_LIBRARY FFTW3F_LIBRARY_DIR)
mark_as_advanced(JACK JACK_INCLUDE_DIR JACK_LIBRARY)
mark_as_advanced(MATH_LIBRARY)
mark_as_advanced(QT_QMAKE_EXECUTABLE)
mark_as_advanced(SNDFILE SNDFILE_LIBRARY_DIR)
mark_as_advanced(SC_HIDAPI)
