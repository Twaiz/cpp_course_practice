#include <iostream>

#include "13Module.h"

int IfStatements() {
    int number1 = {15};
    int number2 = {10};

    bool resultBool = (number1 < number2);
    std::cout << std::boolalpha << "Result of comparison: " << resultBool << std::endl;

    if (resultBool) {
        std::cout << "number1 is less than number2" << std::endl;
    } else {
        std::cout << "number1 is not less than number2" << std::endl;
    }

    if (!resultBool) {
        std::cout << "This will not be printed because resultBool is true" << std::endl;
    }

    return 0;
}
