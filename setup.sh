#!/bin/sh

if [ -e $1 ]; then
    echo "directory $1 already exits"
else
    mkdir $1
    touch $1/main.cpp
    cp sample/main.cpp $1/main.cpp
    cd $1
fi
