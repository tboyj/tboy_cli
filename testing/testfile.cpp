// //
// // Created by jacks on 3/22/2026.
// //
//
// #include "testfile.h"
//
// #include <fstream>
//
// #include "../utils/stringutils.h"
// #include <iostream>
// #include <map>
// #include <ostream>
// #include <vector>

//     void testMap(const std::vector<std::string>& strList) {
//         std::map<std::string, std::string> strMap = utils::stringutils::vectorStringMap(strList);
//
//         if (strMap.contains("Hello")) {
//             std::cout << "VALUE: " << strMap.at("Hello") << std::endl;
//         } else {
//             std::cerr << "ERROR: Key 'Hello' not found in map." << std::endl;
//         }
//         std::cout << std::endl;
//     }
//
//     void testSplit() {
//         std::string str = "Hello=World!";
//         std::vector<std::string> strList = utils::stringutils::split(str,'=');
//
//         for (std::string& s : strList) {
//             std::cout << "[" << s << "],";
//         }
//         std::cout << std::endl;
//
//         testMap(strList);
//     }
//
//     void testTCA() {
//         std::vector<char> helloArray = utils::stringutils::toCharArray("Hello world!");
//         for (char& c : helloArray) {
//             std::cout << "[" << c << "],";
//         }
//         std::cout << std::endl;
//     }
//
//     testfile::testfile() {
//         std::ifstream inputFile("config.txt");
//
//         if (!inputFile.is_open()) { //
//             std::cerr << "Error: Could not open the file." << std::endl; //
//         }
//
//         std::vector<std::string> configuration;
//
//
//         std::string line;
//         while (std::getline(inputFile, line)) { //
//             if (!line.starts_with("//")) { // comments
//                 configuration.push_back(line);
//             }
//         }
//
//         for (const std::string& basic_string : configuration) {
//
//             std::cout << basic_string << std::endl;
//
//         }
//
//         inputFile.close();
//
//         testTCA();
//         testSplit();
//     }
