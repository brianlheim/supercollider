#!/bin/bash

export QPM_SCLANG=$SCLANG
TEST_SPEC=$TRAVIS_BUILD_DIR/.travis/travis_test_run.json
TEST_INCLUDE="$HOME/Quarks $TRAVIS_BUILD_DIR/testsuite/classlibrary"
qpm test.run -l $TEST_SPEC -p $SCLANG --include $TEST_INCLUDE
