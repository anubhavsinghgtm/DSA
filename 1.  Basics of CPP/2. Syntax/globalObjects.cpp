// this is the example of global object where you can run other function before running the main function.

#include <iostream>

class Startup {
public:
    Startup() {
        std::cout << "Initializing..." << std::endl;
    }
};

Startup globalStartup;

int main() {
    std::cout << "Inside main" << std::endl;
    return 0;
}
