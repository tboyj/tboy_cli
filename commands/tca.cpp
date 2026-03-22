//
// Created by jackson on 3/22/26.
//

#include "tca.h"

#include <iostream>
#include <ostream>

#include "../utils/stringutils.h"

namespace commands
{
    void Tca::execute(const std::vector<std::string>& args)
    {
        if (args.size() < 1)
        {
            std::cerr << "Usage: tca <delimiter>" << std::endl;
            return;
        }
        const std::string& text = args[0];

        if (!text.empty())
        {
            std::vector<char> array = utils::stringutils::toCharArray(text);
            for (int i = 0; i < array.size(); i++)
            {
                std::cout << "[" << array[i] << "]";
                if (i < array.size() - 1)
                {
                    std::cout << ", ";
                }
            }
            std::cout << std::endl;
        }
    }
} // commands