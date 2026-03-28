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
        commands/command.h
        commands/commandreg.h
        commands/commandreg.cpp
        commands/help.cpp
        commands/help.h
        commands/command.cpp
        commands/split.cpp
        commands/split.h
        commands/tca.cpp
        commands/tca.h
        commands/vsm.cpp
        commands/vsm.h
        commands/time.cpp
        commands/time.h
        commands/calculator/calculator.cpp
        commands/calculator/calculator.h
)

install(TARGETS tboy_cli DESTINATION /usr/local/bin)