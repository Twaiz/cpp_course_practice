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

    /*
    int numbers3[5] {1, 2};

    std::cout << sizeof(numbers3) << std::endl;
    std::cout << sizeof(numbers3[0]) << std::endl;
    std::cout << sizeof(numbers3) / sizeof(numbers3[0]) << std::endl; // Способ как узнать длину массива - 1 Вариант
    std::cout << std::size(numbers3) << std::endl; // Способ как узнать длину массива - 2 Вариант


    for (int number2{0}; number2 < std::size(numbers3); ++number2) {
        numbers3[number2] = numbers3[number2] + number2;
        std::cout << numbers3[number2] << std::endl;
    }
    */

    int numbers4[] {17, 46546, 798, 1231, 4657, 465};
    unsigned int index = 0;

    for (auto i : numbers4) {
        std::cout << "Element : " << i << std::endl;
        std::cout << "Index : " << index << std::endl;
        ++index;
    }

    return 0;
}
