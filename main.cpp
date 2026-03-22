// #include <filesystem>
// #include <fstream>
// #include <iostream>
// #include <string>
// #include <vector>
//
// #include "utils/stringutils.h"


#include <iostream>
#include <ostream>

#include "testing/testfile.h"
/*
* TBOY CLI
 */
std::string returnInput = {};

int main() {
    std::cout << "Hello World!" << "\n";
    while (returnInput != "exit" && returnInput != "quit") {
        std::cout << "$" << " ";
        std::cin >> returnInput;
    }
    return 0;
}