#!/bin/bash

qpm test.run -l $TRAVIS_BUILD_DIR/.travis/travis_test_run.json --path $SCLANG \
    --include $HOME/Quarks \
    --include $TRAVIS_BUILD_DIR/testsuite/classlibrary
