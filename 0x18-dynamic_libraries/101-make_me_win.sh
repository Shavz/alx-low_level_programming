#!/bin/bash
wget -q https://github.com/Shavz/alx-low_level_programming/tree/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=$PWD/win.so
