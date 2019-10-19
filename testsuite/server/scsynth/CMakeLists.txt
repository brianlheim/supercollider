set(tests
    scsynth_test.cpp
)

MakeTestPerSourceFile(SOURCES ${tests} LIBS libscsynth sc_boost_test)
