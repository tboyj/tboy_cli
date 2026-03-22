//
// Created by jackson on 3/22/26.
//

#include "time.h"

#include <ctime>
#include <iostream>
#include <ostream>

namespace commands
{
    void Time::execute(const std::vector<std::string>& args)
    {
        if (args.empty())
        {
            std::time_t time = std::time(nullptr);
            std::cout << "The time is " << std::asctime(std::localtime(&time)) << std::endl;
        }

    }
} // commands