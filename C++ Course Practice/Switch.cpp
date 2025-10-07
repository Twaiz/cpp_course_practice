#include <iostream>

#include "14Module.h"

int Switch() {
    int number1 = {20};
    int number2 = {15};

    int cmp = 0;
    if (number1 < number2) {
        cmp = 1;
    } else if (number1 > number2) {
        cmp = 2;
    } else {
        cmp = 0;
    }

    switch (cmp) {
        case 1:
            std::cout << "number1 is less than number2" << std::endl;
            break;
        case 2:
            std::cout << "number1 is greater than number2" << std::endl;
            break;
        case 0:
            std::cout << "number1 is equal to number2" << std::endl;
            break;
    }

    return 0;
}
