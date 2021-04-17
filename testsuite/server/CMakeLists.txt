add_library(sc_boost_test STATIC boost_test.cpp)
target_include_directories(sc_boost_test PUBLIC ${boost_include_dirs})

# Call like MakeTestPerSourceFile(SOURCES ... LIBS ...)
function(MakeTestPerSourceFile)
    cmake_parse_arguments(ARG "" "" "SOURCES;LIBS" ${ARGN})
    foreach(test ${ARG_SOURCES})
        get_filename_component(test_name ${test} NAME_WE)
        add_executable(${test_name} ${test})
        target_link_libraries(${test_name} ${ARG_LIBS})
        add_test(NAME ${test_name} COMMAND ${test_name})
    endforeach(test)
endfunction()

add_subdirectory(scsynth)
if(SUPERNOVA)
    add_subdirectory(supernova)
endif()

