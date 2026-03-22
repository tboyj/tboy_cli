#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "utils/stringutils.h"

void testMap(std::vector<std::string> strList) {
    std::map<std::string, std::string> strMap = utils::vectorStringMap(strList);

    if (strMap.contains("Hello")) {
        std::cout << "VALUE: " << strMap.at("Hello") << std::endl;
    } else {
        std::cerr << "ERROR: Key 'Hello' not found in map." << std::endl;
    }
    std::cout << std::endl;
}

void testSplit() {
    std::string str = "Hello=World!";
    std::vector<std::string> strList = utils::split(str,'=');

    for (std::string& s : strList) {
        std::cout << "[" << s << "],";
    }
    std::cout << std::endl;

    testMap(strList);
}

void testTCA() {
    std::vector<char> helloArray = utils::toCharArray("Hello world!");
    for (char& c : helloArray) {
        std::cout << "[" << c << "],";
    }
    std::cout << std::endl;
}

/*
* TBOY CLI
 */
int main() {

    std::ifstream inputFile("config.txt");

    if (!inputFile.is_open()) { //
        std::cerr << "Error: Could not open the file." << std::endl; //
        return 1;
    }

    std::vector<std::string> configuration;


    std::string line;
    while (std::getline(inputFile, line)) { //
        if (!line.starts_with("//")) { // comments
            configuration.push_back(line);
        }
    }

    for (const std::string& line : configuration) {

        std::cout << line << std::endl;

    }

    inputFile.close();

    testTCA();
    testSplit();

    return 0;
}