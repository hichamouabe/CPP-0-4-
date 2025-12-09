#include "Sed.hpp"
#include <iostream>

int main(int argc, char **argv) {
    // Check args: Program + filename + s1 + s2 = 4 args
    if (argc != 4) {
        std::cerr << "Usage: ./sed_losers <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    Sed sed(filename);
    sed.replace(s1, s2);

    return 0;
}
