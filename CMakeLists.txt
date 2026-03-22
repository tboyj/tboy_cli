cmake_minimum_required(VERSION 4.1)
project(tboy_cli)

set(CMAKE_CXX_STANDARD 20)

add_executable(tboy_cli main.cpp
        utils/stringutils.h
        utils/stringutils.cpp
        utils/cliutils.cpp
        utils/cliutils.h
        utils/utils.cpp
        utils/utils.h
        testing/testfile.cpp
        testing/testfile.h)

