#!/bin/sh

read input
if [ -e $input ]; then
    echo "directory $input already exits"
else
    mkdir $input
    touch $input/main.cpp
    cp sample/main.cpp $input/main.cpp
    cd $input
fi
