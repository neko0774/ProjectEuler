#!/bin/sh

read input
mkdir $input
if [-e {$input}]; then
    echo "directory {$input} already exits"
    fi
cp sample/main.cpp {$ipnut}/main.cpp
cp sample/main.py {$ipnut}/main.py
cd {$input}
