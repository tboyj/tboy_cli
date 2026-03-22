//
// Created by jacks on 3/21/2026.
//

#ifndef TBOY_CLI_STRINGUTILS_H
#define TBOY_CLI_STRINGUTILS_H

#include <map>
#include <string>
#include <vector>

namespace utils::stringutils {

        std::vector<char> toCharArray(const std::string& text);
        std::vector<std::string> split(const std::string& text, char delimiter);
        std::map<std::string, std::string> vectorStringMap(const std::vector<std::string>& text);
}

#endif //TBOY_CLI_STRINGUTILS_H