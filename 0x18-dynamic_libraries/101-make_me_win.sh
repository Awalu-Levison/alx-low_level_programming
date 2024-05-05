#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Awalu-Levison/alx-low_level_programming/master/0x18-dynamic_libraries/libdynamicmyhack.so
export LD_PRELOAD="$PWD/../libdynamicmyhack.so"
