#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Please specify the .plsSetup file to start" << std::endl;
        return -1;
    }
    std::cout << "well done you know how to use it\nyou want to use " << argv[1] << " as the setup file!" << std::endl;
    return 0;
}
