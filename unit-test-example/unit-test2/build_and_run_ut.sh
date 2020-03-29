#!/bin/bash

set -ue

BUILD_DIR=build_ut

mkdir -p $BUILD_DIR

pushd $BUILD_DIR

rm -rf *

cmake -DUNIT_TEST=1  .. 
make

echo "************* running unit test cases ************ \n";
chmod 0777 TestClass
./TestClass
echo " ************ test cases done ***************\n";
