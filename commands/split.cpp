//
// Created by jackson on 3/22/26.
//

#include "split.h"

#include <iostream>
#include <ostream>

#include "../utils/stringutils.h"

namespace commands
{
    void Split::execute(const std::vector<std::string>& args)
    {
        const std::string& text = args[0];
        const auto& delim = args[1];

        if (args.size() < 2)
        {
            std::cerr << "split: could not perform command" << std::endl;
            return;
        }
        if (delim.empty())
        {
            std::cerr << "split: no delimiter specified" << std::endl;
            return;
        }

        const char& delimiter = delim[0];

        std::vector<std::string> result = utils::stringutils::split(text, delimiter);

        for (int i = 0; i < result.size(); i++)
        {
            if (i != result.size() - 1)
            {
                std::cerr << "[" << result[i] << "], " << std::endl;
            } else
            {
                std::cerr << "[" << result[i] << "]" << std::endl;
            }
        }
    }
} // commands