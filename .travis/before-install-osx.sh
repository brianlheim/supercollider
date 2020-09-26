#!/bin/sh

export HOMEBREW_NO_ANALYTICS=1
export HOMEBREW_NO_INSTALL_CLEANUP=1
export HOMEBREW_NO_AUTO_UPDATE=1

PACKAGES="libsndfile portaudio ccache ninja fftw"
if $USE_SYSLIBS; then
    # boost is already installed
    PACKAGES="$PACKAGES yaml-cpp"
fi

brew update --preinstall
brew install $PACKAGES || brew install $PACKAGES || exit 1
brew upgrade qt5 || exit 4
brew link qt5 --force || exit 5

# according to https://docs.travis-ci.com/user/caching#ccache-cache
export PATH="/usr/local/opt/ccache/libexec:$PATH"

# To get less noise in xcode output
gem install xcpretty
