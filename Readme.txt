PALINDROME

##Introduction
This program implements a functions that finds out whether a given string is a palindrome or not.

## Requirements
A version of Cmake superior to 3.10.0 is required to build this project.

## Build
To build and run the application, simply create a "build" directory in the project root and run CMake from there:

mkdir build
cd build
cmake ..
make
sudo ./palindrome


To build and run unit tests with gtest:

cmake -DBUILD_TEST=ON ..
make
./tests/unit-tests




