#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Aprime98/alx-low_level_programming/main/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
