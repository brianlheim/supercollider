#!/bin/bash

cd $TRAVIS_BUILD_DIR/BUILD
sudo pip install git+https://github.com/brianlheim/qpm.git@test-expander
qpm quark checkout API --location $HOME/Quarks
