# This makes sclang/scide work with a Qt installation at a fixed location.
set(CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    find_package(ALSA)
    if(ALSA_FOUND)
        message(STATUS "Compiling with ALSA midi support")
    endif()
endif()

find_package(Readline 5.0)
mark_as_advanced(READLINE_INCLUDE_DIR READLINE_LIBRARY)
if(READLINE_FOUND)
    message(STATUS "Compiling with Readline support")
endif()

find_package(Sndfile)
if(NOT SNDFILE_FOUND AND NOT NO_LIBSNDFILE)
    message(FATAL_ERROR "Cannot find libsndfile")
endif()

if(SC_IDE)
    qt5_wrap_cpp(SCLANG_MOC_SRCS ../editors/sc-ide/primitives/sc_ipc_client.hpp)
endif()

if(SC_QT)
    set(QT_COLLIDER_LANG_CLIENT ON)
    include(../QtCollider/CMakeLists.txt)
endif()
include(../SCDoc/CMakeLists.txt) # for SCDOC_SRCS

file(GLOB_RECURSE headers ../include/*.h* )
file(GLOB_RECURSE external_headers ../external_libraries/*.h* )

add_library(libsclang STATIC
    LangPrimSource/SC_LinkClock.cpp
    LangPrimSource/PyrSignalPrim.cpp
    LangPrimSource/PyrSched.cpp
    LangPrimSource/PyrPrimitive.cpp
    LangPrimSource/PyrMathPrim.cpp
    LangPrimSource/SC_ComPort.cpp
    LangPrimSource/OSCData.cpp
    LangPrimSource/PyrArchiver.cpp
    LangPrimSource/PyrArrayPrimitives.cpp
    LangPrimSource/PyrBitPrim.cpp
    LangPrimSource/PyrCharPrim.cpp
    LangPrimSource/PyrFilePrim.cpp
    LangPrimSource/PyrListPrim.cpp
    LangPrimSource/PyrPlatformPrim.cpp
    LangPrimSource/PyrStringPrim.cpp
    LangPrimSource/PyrSymbolPrim.cpp
    LangPrimSource/PyrUnixPrim.cpp
    LangPrimSource/PyrSerialPrim.cpp

    LangSource/AdvancingAllocPool.cpp
    LangSource/ByteCodeArray.cpp
    LangSource/DumpParseNode.cpp
    LangSource/GC.cpp
    LangSource/InitAlloc.cpp
    LangSource/PyrInterpreter3.cpp
    LangSource/PyrLexer.cpp
    LangSource/PyrMathOps.cpp
    LangSource/PyrMathSupport.cpp
    LangSource/PyrMessage.cpp
    LangSource/PyrObject.cpp
    LangSource/PyrParseNode.cpp
    LangSource/PyrSignal.cpp
    LangSource/PyrSymbolTable.cpp
    LangSource/SC_LanguageClient.cpp
    LangSource/SC_LanguageConfig.cpp
    LangSource/SC_TerminalClient.cpp
    LangSource/SimpleStack.cpp
    LangSource/VMGlobals.cpp
    LangSource/dumpByteCodes.cpp

    LangSource/Bison/lang11d_tab.cpp

    ${CMAKE_SOURCE_DIR}/common/SC_Filesystem_macos.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_Filesystem_win.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_Filesystem_unix.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_Filesystem_iphone.cpp

    ${CMAKE_SOURCE_DIR}/common/fftlib.c
    ${CMAKE_SOURCE_DIR}/common/Samp.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_AllocPool.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_Reply.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_StringBuffer.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_StringParser.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_TextUtils.cpp
    ${CMAKE_SOURCE_DIR}/common/SC_Win32Utils.cpp
    ${CMAKE_SOURCE_DIR}/common/sc_popen.cpp

    $<$<BOOL:APPLE>:
        ${CMAKE_SOURCE_DIR}/common/SC_Apple.mm
        LangPrimSource/SC_CoreMIDI.cpp
        LangPrimSource/SC_CoreAudioPrim.cpp
    >
    $<$<BOOL:SC_IDE>:
        ../editors/sc-ide/primitives/sc_ipc_client.cpp
        ${SCLANG_MOC_SRCS}
    >
    $<$<BOOL:SC_QT>:${CMAKE_SOURCE_DIR}/editors/sc-ide/primitives/localsocket_utils.cpp>
    $<$<BOOL:WIN32>:LangPrimSource/SC_PortMidi.cpp>
    $<$<BOOL:SC_HIDAPI>:LangPrimSource/SC_HID_api.cpp>
    $<$<BOOL:ALSA_FOUND>:LangPrimSource/SC_AlsaMIDI.cpp>
    $<$<PLATFORM_ID:Linux>:LangPrimSource/SC_LID.cpp>

    # make qt creator happy
    ${headers}
    ${external_headers}

    ${QT_COLLIDER_SRCS}
)

if(APPLE)
    set_source_files_properties(${CMAKE_SOURCE_DIR}/common/SC_Filesystem_macos.cpp
        PROPERTIES COMPILE_FLAGS -xobjective-c++)
    set_source_files_properties(${CMAKE_SOURCE_DIR}/common/SC_Apple.mm
        PROPERTIES COMPILE_FLAGS "-x objective-c++ -fobjc-exceptions")
endif()

target_compile_definitions(libsclang PUBLIC
    $<$<PLATFORM_ID:Linux>:HAVE_LID>
    $<$<BOOL:SC_IDE>:SC_IDE QT_NO_KEYWORDS>
    $<$<BOOL:SC_HIDAPI>:SC_HIDAPI HAVE_HIDAPI>
    $<$<BOOL:SC_ABLETON_LINK>:SC_ABLETON_LINK>
    $<$<NOT:$<BOOL:SCLANG_SERVER>>:NO_INTERNAL_SERVER>
    $<$<BOOL:READLINE_FOUND>:HAVE_READLINE>
    $<$<BOOL:ALSA_FOUND>:HAVE_ALSA=1>
    $<$<BOOL:GC_SANITYCHECK>:GC_SANITYCHECK>

    PRIVATE
    YYSTACK_USE_ALLOC
)

target_include_directories(libsclang PUBLIC
    $<$<BOOL:WIN32>: ../platform/windows/compat_stuff>
    $<$<BOOL:SC_HIDAPI>:
        ${CMAKE_SOURCE_DIR}/external_libraries/hidapi/hidapi
        ${CMAKE_SOURCE_DIR}/external_libraries/hidapi/hidapi_parser
    >

    ${CMAKE_SOURCE_DIR}/include/common
    ${CMAKE_SOURCE_DIR}/include/lang
    ${CMAKE_SOURCE_DIR}/include/plugin_interface
    ${CMAKE_SOURCE_DIR}/include/server
    ${CMAKE_SOURCE_DIR}/common
    ${CMAKE_SOURCE_DIR}/external_libraries/boost_sync/include
    ${CMAKE_SOURCE_DIR}/external_libraries/nova-tt
    LangPrimSource
    LangSource
    LangSource/Bison
    ${SCDOC_DIR}

    ${YAMLCPP_INCLUDE_DIR}
    ${boost_include_dirs}
)

target_link_libraries(libsclang PUBLIC
    tlsf
    ${sclang_qt_libs}
    ${PTHREADS_LIBRARIES}
    ${YAMLCPP_LIBRARY}
    ${ICU_LIBRARIES}
    boost_thread_lib
    boost_system_lib
    boost_regex_lib
    boost_filesystem_lib
    $<$<BOOL:SC_ABLETON_LINK>:Ableton::Link>
    $<$<BOOL:SC_HIDAPI>:hidapi hidapi_parser>
    $<$<BOOL:SCLANG_SERVER>:libscsynth>
    $<$<BOOL:READLINE_FOUND>:${READLINE_LIBRARY}>
    $<$<BOOL:APPLE>:"-framework Carbon" "-framework CoreAudio" "-framework CoreMIDI"
        "-framework CoreServices" "-framework IOKit" "-framework CoreFoundation"
    >
    $<$<BOOL:ALSA_FOUND>:${ALSA_LIBRARY}>
    $<$<BOOL:FFTW3F_FOUND>:${FFTW3F_LIBRARY}>
    $<$<BOOL:SNDFILE_FOUND>:${SNDFILE_LIBRARIES}>
    $<$<BOOL:WIN32>:wsock32 ws2_32 portmidi iphlpapi>
    $<$<PLATFORM_ID:Linux>:rt>
    $<$<BOOL:LTO>:-flto -flto-report -fwhole-program>
)

target_compile_options(libsclang PUBLIC
    $<$<BOOL:LTO>:-flto -flto-report>
)

if(SC_QT)
    get_target_property(QtCore_location Qt5::Core LOCATION)
    get_filename_component(QT_BIN_PATH ${QtCore_location} DIRECTORY)

    if(SC_USE_QTWEBENGINE)
        target_compile_definitions(libsclang PUBLIC SC_USE_QTWEBENGINE)
    endif()
endif()

if(SC_HIDAPI)
    if(${CMAKE_SYSTEM_NAME} MATCHES "Linux" AND HID_HIDRAW)
        target_link_libraries(libsclang ${UDEV_LIBRARIES})
    endif()
    if(HID_LIBUSB)
        target_link_libraries(libsclang ${LIBUSB_1_LIBRARIES})
    endif()
endif()

if(NOT WIN32)
    set_property(TARGET libsclang PROPERTY OUTPUT_NAME sclang)
endif()

## external libraries

if(WIN32 AND SC_HIDAPI)
    target_link_libraries(libsclang hid)
endif()

if(WIN32 AND NOT MINGW)
    # mingw-w64 provides getopt
    target_sources(libsclang PRIVATE ../platform/windows/compat_stuff/getopt/getopt.c)
    target_include_directories(libsclang PUBLIC ../platform/windows/compat_stuff/getopt)
endif()

# This sets up the exe icon for windows.
if(WIN32)
    set(RES_FILES ${CMAKE_SOURCE_DIR}/platform/windows/Resources/sclang.rc)
    set(CMAKE_RC_COMPILER_INIT windres)
    enable_language(RC)
    set(CMAKE_RC_COMPILE_OBJECT "<CMAKE_RC_COMPILER> -O coff <DEFINES> -i <SOURCE> -o <OBJECT>")
endif()

add_executable(sclang LangSource/cmdLineFuncs.cpp ${RES_FILES})
target_compile_definitions(sclang PUBLIC USE_SC_TERMINAL_CLIENT)

# Installation

if(APPLE)
    add_custom_command(TARGET sclang POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory $<TARGET_FILE_DIR:SuperCollider>/../MacOS/
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_FILE:sclang> $<TARGET_FILE_DIR:SuperCollider>/../MacOS)
elseif(WIN32)
    if(NOT MSVC)
        set_target_properties(sclang PROPERTIES RUNTIME_OUTPUT_DIRECTORY "$<CONFIG>")
    endif(NOT MSVC)

    set(SC_WIN_DLL_DIRS)
    if(SNDFILE_LIBRARY_DIR)
      list(APPEND SC_WIN_DLL_DIRS "${SNDFILE_LIBRARY_DIR}")
    endif(SNDFILE_LIBRARY_DIR)
    if(FFTW3F_LIBRARY_DIR)
      list(APPEND SC_WIN_DLL_DIRS "${FFTW3F_LIBRARY_DIR}")
    endif(FFTW3F_LIBRARY_DIR)
    if(READLINE_LIBRARY_DIR)
      file(GLOB READLINE_DLL "${READLINE_LIBRARY_DIR}/*readline*.dll")
      list(APPEND SC_WIN_DLL_DIRS "${READLINE_LIBRARY_DIR}")
      add_custom_command(TARGET sclang
          POST_BUILD
          COMMAND ${CMAKE_COMMAND} -E copy_if_different "${READLINE_DLL}" $<TARGET_FILE_DIR:sclang>
      )
    endif(READLINE_LIBRARY_DIR)
    if(QT_BIN_PATH)
      list(APPEND SC_WIN_DLL_DIRS "${QT_BIN_PATH}")
    endif(QT_BIN_PATH)

    if(SC_IDE)
      if(MSYS)
        add_custom_command(TARGET sclang
          POST_BUILD
          COMMAND "${CMAKE_SOURCE_DIR}/platform/windows/junctions.sh" "remove" "$<TARGET_FILE_DIR:sclang>"
          COMMAND ${CMAKE_COMMAND} -E copy_directory $<TARGET_FILE_DIR:sclang> $<TARGET_FILE_DIR:SuperCollider>
          COMMAND "${CMAKE_SOURCE_DIR}/platform/windows/junctions.sh" "create" "${CMAKE_SOURCE_DIR}" "$<TARGET_FILE_DIR:sclang>"
          COMMENT "Copying files in target sclang to target SuperCollider (scide) and creating links to SCClassLibrary e.a."
        )
      else()
        add_custom_command(TARGET sclang
          POST_BUILD
          COMMAND cmd /C "\"\"${CMAKE_SOURCE_DIR}/platform/windows/junctions.bat\" remove \"$<TARGET_FILE_DIR:sclang>\"\""
          COMMAND ${CMAKE_COMMAND} -E copy_directory $<TARGET_FILE_DIR:sclang> $<TARGET_FILE_DIR:SuperCollider>
          COMMAND cmd /C "\"\"${CMAKE_SOURCE_DIR}/platform/windows/junctions.bat\" create \"$<TARGET_FILE_DIR:sclang>\" \"${CMAKE_SOURCE_DIR}\"\""
          COMMENT "Copying files in target sclang to target SuperCollider (scide) and creating links to SCClassLibrary e.a."
        )
      endif()
    endif(SC_IDE)

    install(TARGETS sclang
        PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE
		DESTINATION SuperCollider
    )

    if(SC_QT)
		SET(CMAKE_INSTALL_SYSTEM_RUNTIME_DESTINATION SuperCollider)
        include(InstallRequiredSystemLibraries)
        if(MSYS)
            SET(QT_PLUGINS_DIR "${QT_BIN_PATH}/../share/qt5/plugins" CACHE PATH "Location of qt plugins for windows as provided by MSYS2")
        else()
            SET(QT_PLUGINS_DIR "${QT_BIN_PATH}/../plugins" CACHE PATH "Location of qt plugins for windows")
        endif()

        foreach(plugin ${Qt5Network_PLUGINS} ${Qt5Gui_PLUGINS} ${Qt5Sql_PLUGINS} ${Qt5PrintSupport_PLUGINS})
            get_target_property(_loc ${plugin} LOCATION)
            get_filename_component(_parent_dir ${_loc} DIRECTORY)
            get_filename_component(_name_we ${_loc} NAME_WE)
            get_filename_component(_abs ${QT_PLUGINS_DIR} ABSOLUTE)
            string(REPLACE "${_abs}/" "" _dest_dir ${_parent_dir})
            install(FILES "${_parent_dir}/${_name_we}$<$<CONFIG:DEBUG>:d>.dll"
                DESTINATION "SuperCollider/${_dest_dir}"
            )
        endforeach()
    endif(SC_QT)

    if(NOT SC_IDE)
        install(CODE "
            include(BundleUtilities)
            fixup_bundle(
                \"${CMAKE_INSTALL_PREFIX}/SuperCollider/sclang.exe\"
                \"\"
                \"${SC_WIN_DLL_DIRS}\" )
            "
            COMMENT "Looking for libraries..."
            VERBATIM
        )
    endif(NOT SC_IDE)

else()
    install(TARGETS sclang
        RUNTIME DESTINATION "bin"
        PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)
endif()
