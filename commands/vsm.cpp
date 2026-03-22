//
// Created by jackson on 3/22/26.
//

#include "vsm.h"

#include <iostream>
#include <ostream>

#include "../utils/stringutils.h"

namespace commands
{
    void Vsm::execute(const std::vector<std::string>& args)
    {
        if (args.empty())
        {
            std::cerr << "Error: Vsm command requires at least one argument." << std::endl;
            return;
        }
        const std::string& text = args[0];
        std::vector<std::string> splitted = utils::stringutils::split(text, ',');

        if (splitted.size() % 2 != 0)
        {
            std::cerr << "Error: Vsm command requires even number of arguments." << std::endl;
            return;
        }

        std::map<std::string, std::string> map = utils::stringutils::vectorStringMap(splitted);

        std::cout << "Vsm command map:" << std::endl;

        for (const auto& entry : map)
        {
            std::cerr << entry.first << ": " << entry.second << std::endl;
        }
    }
} // commands