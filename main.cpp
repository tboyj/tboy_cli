// #include <filesystem>
// #include <fstream>
// #include <iostream>
// #include <string>
// #include <vector>
//
// #include "utils/stringutils.h"


#include <iostream>
#include <ostream>

#include "commands/command.h"
#include "commands/commandreg.h"
#include "commands/help.h"
#include "testing/testfile.h"

/*
* TBOY CLI
 */
std::string returnInput = {};

int main(int argc, char* argv[]) {
    // std::cout << "Hello World!" << "\n";
    // while (returnInput != "exit" && returnInput != "quit") {
    //     std::cout << "$ ";
    //     std::getline(std::cin, returnInput);
    // }
    if (argc < 2)
    {
        std::cout << "Usage: tboy <command>" << std::endl;
        return 1;
    }

    commands::CommandReg registry;
    registry.registerCommand(std::make_unique<commands::Help>());
    std::string cmd = argv[1];
    std::vector<std::string> args(argv+2, argv+argc);
    registry.execute(cmd,args);


    return 0;
}