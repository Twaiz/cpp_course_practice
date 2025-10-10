#include <iostream>
#include <string>

int RangeBasedForLoop() {
    std::string arrNames[] = {"Vasya", "Petya", "Oleg"};

    for (std:: string name : arrNames) {
        std::cout << name << std::endl;
    }

    return 0;
}
