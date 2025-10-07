#include <iostream>

#include "14Module.h"

int ElseIf() {
    int number1 = {15};
    int number2 = {10};

    if (number1 < number2) {
        std::cout << "number1 is less than number2" << std::endl;
    } else if (number1 > number2) {
        std::cout << "number1 is greater than number2" << std::endl;
    } else {
        std::cout << "number1 is equal to number2" << std::endl;
    }

    return 0;
}
