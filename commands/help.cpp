//
// Created by jackson on 3/22/26.
//

#include "help.h"

#include <iostream>
#include <ostream>

namespace commands
{
    void Help::execute(const std::vector<std::string>& args)
    {
        std::cout << "tboy - commands: " << std::endl;
        std::cout << Help::returnName() << " - " << Help::returnDescription() << std::endl;
    }
} // commands