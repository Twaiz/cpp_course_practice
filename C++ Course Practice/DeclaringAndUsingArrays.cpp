#include <iostream>

int DeclaringAndUsingArrays() {
    /*
    int numbers1[5];
    numbers1[0] = 5;
    numbers1[1] = 10;

    for (int number : numbers1) {
        std::cout << number << std::endl;
    }
    */

    /*
    int numbers2[] = {1, 2, 3};
    for (int number1{0}; number1 < 3; ++number1) {
        std::cout << numbers2[number1] << std::endl;
    }
    */

    int numbers3[5] {1, 2};
    for (int number2{0}; number2 < 5; ++number2) {
        numbers3[number2] = numbers3[number2] + number2;
        std::cout << numbers3[number2] << std::endl;
    }

    return 0;
}
