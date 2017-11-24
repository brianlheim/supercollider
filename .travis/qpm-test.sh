#!/bin/bash

export QPM_SCLANG=$SCLANG
TEST_SPEC=$TRAVIS_BUILD_DIR/travis_test_run_proto.json 
TEST_INCLUDE="$HOME/Quarks $TRAVIS_BUILD_DIR/testsuite/classlibrary"
qpm test.list -p $SCLANG --include $TEST_INCLUDE -o
qpm test.run -l $TEST_SPEC -o -p $SCLANG --include $TEST_INCLUDE
