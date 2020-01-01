#!/bin/bash
adb root
adb remount
adb push ./build/bin /data/mybin
adb shell ./data/mybin/demo