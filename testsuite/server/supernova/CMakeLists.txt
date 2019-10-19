set(tests
    buffer_manager_test.cpp
    callback_interpreter_system.cpp
    memory-pool_test.cpp
    server_dsp_thread_queue_test.cpp
    server_dsp_thread_test.cpp
    server_node_graph_test.cpp
    server_scheduler_test.cpp
    server_synth_factory_test.cpp
    server_test.cpp
    simple_pool_test.cpp
    sized_array_test.cpp
    sndfile_backend_test.cpp
    static_pool_test.cpp
    timetag_test.cpp
)

if(NOT APPLE)
    list(APPEND tests static_allocator_test.cpp tl_allocator_test.cpp)
endif()

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    list(APPEND tests perf_counter_test.cpp)
endif()

MakeTestPerSourceFile(SOURCES ${tests} LIBS libsupernova sc_boost_test boost_thread_lib)
