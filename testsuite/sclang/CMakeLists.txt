set(tests
    sclang_crash_1.scd
    sclang_crash_2.scd
    sclang_crash_3.scd
    sclang_crash_deprecated.scd
)

foreach(test ${tests})
    get_filename_component(test_name ${test} NAME_WE)
    add_test(NAME ${test_name} COMMAND sclang -a -l ${CMAKE_BINARY_DIR}/build_sclang.cfg ${test})
endforeach()
