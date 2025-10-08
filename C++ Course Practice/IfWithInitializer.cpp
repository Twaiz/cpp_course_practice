#include <iostream>

int IfWithInitializer() {
    bool go = {false};

    if (int speed{55}; go) {
        if (speed > 5) {
            std::cout << "You are going too fast!" << std::endl;
        } else {
            std::cout << "You are within the speed limit." << std::endl;
        }
    } else {
        std::cout << "You are not allowed to go." << speed << std::endl;
    }

    return 0;
}
