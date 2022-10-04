#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Please specify the .plsSetup file to start" << std::endl;
        return -1;
    }

    return 0;
}
