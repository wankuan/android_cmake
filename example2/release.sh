#!/bin/bash
ANDROID_NDK_PATH=/usr/android-ndk-r20/
cd ./build
if [ "$1" = 'all' ] ;then
    cmake\
      -DDEBUG=NO\
      -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK_PATH/build/cmake/android.toolchain.cmake \
      -DANDROID_NDK=$ANDROID_NDK_PATH \
      -DANDROID_TOOLCHAIN=clang\
      -DANDROID_ABI=armeabi-v7a \
      -DANDROID_PLATFORM=android-21 \
      -DANDROID_STL=c++_static\
      ..
    make
elif [ "$1" = 'clean' ];then
    make clean
    rm -rf ./*
else
    echo "error input"
    echo "----build all->./build.sh all"
    echo "----build clean->./build.sh clean"
fi