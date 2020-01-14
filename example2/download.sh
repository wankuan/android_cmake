#!/bin/bash
adb root
adb remount
adb push ./build/bin/demo /data/mybin
adb shell chmod 755 ./data/mybin/demo
# adb shell ./data/mybin/demo
