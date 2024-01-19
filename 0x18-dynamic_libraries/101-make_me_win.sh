#!/bin/bash
wget -P /tmp https://github.com/semkufu95/alx-low_level_programming/raw/master/0x18-dynamic_libraries/semkufu95.so
export LD_PRELOAD=/tmp/semkufu95.so
