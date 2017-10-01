#!/bin/bash

cd $TRAVIS_BUILD_DIR/BUILD
sudo pip install git+https://github.com/scztt/qpm.git@qpm-unit
qpm quark checkout UnitTesting API --location $HOME/Quarks
cp $TRAVIS_BUILD_DIR/.travis/travis_test_run.json .
