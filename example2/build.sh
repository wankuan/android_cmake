
# read input
# if [ ! -n "$1" ] ;then
#   echo "you have not input a word!"
# else
#   echo "the word you input is $1"
# fi
# echo "脚本$0"
# echo "clan:$1"
# echo "第二个参数$2"
ANDROID_NDK_PATH=/usr/android-ndk-r20/
cd ./jni
if [ "$1"=='build' ] ;then
  # echo "you have not input a word!"
    cmake -DDEBUG=NO -DCMAKE_TOOLCHAIN_FILE=$ANDROID_NDK_PATH/build/cmake/android.toolchain.cmake \
      -DANDROID_NDK=$ANDROID_NDK_PATH \
      -DANDROID_TOOLCHAIN=clang\
      -DANDROID_ABI=armeabi-v7a \
      -DANDROID_PLATFORM=android-21 \
      -DANDROID_STL=c++_static \
      ..
elif [ "$1"=='clean' ];then
    ndk-build clean
else
    echo "nothing"
  # echo "the word you input is $1"
fi
# if [ "$1" == 'yes' ]; then
#     echo "yes"
# elif [ "$1" == 'no' ]; then
#     echo "no"
# else
#     echo "nothing"
# fi
