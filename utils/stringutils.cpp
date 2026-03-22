//
// Created by jacks on 3/21/2026.
//

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

namespace utils {
    std::vector<char> toCharArray(const std::string& text) {
        std::vector<char> result;
        for (char i : text) {
            result.push_back(i);
        }
        return result;
        // std::vector<char> result(text.begin(), text.end()); **OUTSIDER HELP**
        // that deals with pointers though so study this more.
    }

    std::vector<std::string> split(const std::string& text, char delimiter) {

        std::stringstream ss(text);
        std::vector<std::string> result;
        std::string item;
        while (getline(ss, item, delimiter)) {
            result.push_back(item);
        }

        return result;
    }

    std::map<std::string, std::string> vectorStringMap(const std::vector<std::string>& text) {
        std::map<std::string, std::string> result;

        if (text.size() % 2 == 0) {
            for (int i = 0; i + 1 < text.size(); i++) {
                result.insert(std::pair<std::string, std::string>(text.at(i), text.at(i + 1)));
            }

            /*
             * potential improvement
             * ::
             *   for (int i = 0; i + 1 < text.size(); i += 2) {
                    result[text[i]] = text[i + 1]; // cleaner than insert + pair
                }
                ::
             */

        } else {
            std::cerr << "Not enough valid key-value pairs" << std::endl;
        }

        return result;
    }
}
