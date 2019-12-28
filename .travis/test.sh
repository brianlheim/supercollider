#!/bin/bash

if [[ $TRAVIS_OS_NAME == linux ]]; then
	export SCLANG=$TRAVIS_BUILD_DIR/BUILD/Install/bin/sclang
else
	export SCLANG=$TRAVIS_BUILD_DIR/BUILD/Install/SuperCollider/SuperCollider.app/Contents/MacOS/sclang
fi

# runs tests in testsuite/sclang, testsuite/supernova, and testsuite/scsynth
ctest -C Release --verbose --output-on-failure || exit 1

# runs tests in testsuite/classlibrary
if [[ $QT == true ]]; then $TRAVIS_BUILD_DIR/.travis/qpm-test.sh; fi
