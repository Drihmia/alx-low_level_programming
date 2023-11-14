#!/bin/bash
wget -q -P /tmp https://github.com/Drihmia/alx-low_level_programming/raw/main/0x18-dynamic_libraries/injection.so
export LP_PRELOAD=/tmp/injection.so
