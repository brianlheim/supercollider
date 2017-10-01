#!/bin/bash

cd $TRAVIS_BUILD_DIR/BUILD
sudo pip install git+https://github.com/scztt/qpm.git@qpm-unit
qpm quark checkout API --location $HOME/Quarks
