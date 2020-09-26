#!/bin/sh

# Keep a raw log of cmake's output
BUILD_LOG=$TRAVIS_BUILD_DIR/BUILD/raw_build.log
XCPRETTY='xcpretty --simple --no-utf --no-color'

# Make cmake failure an overall failure
set -o pipefail
cmake --build $TRAVIS_BUILD_DIR/BUILD --config Release --target install | tee $BUILD_LOG
CMAKE_EXIT=$?
set +o pipefail

if [[ $CMAKE_EXIT != 0 ]]; then
    echo "Build failed. Log:"
    cat $BUILD_LOG
fi

echo "SUPERCOLLIDER OTOOL -L"
otool -L $TRAVIS_BUILD_DIR/BUILD/Install/SuperCollider/SuperCollider.app/Contents/MacOS/SuperCollider
echo "WEBENGINEPROC OTOOL -L"
otool -L $TRAVIS_BUILD_DIR/BUILD/Install/SuperCollider/SuperCollider.app/Contents/Frameworks/QtWebEngineCore.framework/Versions/5/Helpers/QtWebEngineProcess.app/Contents/MacOS/QtWebEngineProcess
echo "SCLANG RUN"
$TRAVIS_BUILD_DIR/BUILD/Install/SuperCollider/SuperCollider.app/Contents/MacOS/sclang

exit $CMAKE_EXIT
