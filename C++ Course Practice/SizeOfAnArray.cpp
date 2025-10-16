#include <iostream>

int SizeOfAnArray() {
    int numbers3[5]{1, 2};

    std::cout << sizeof(numbers3) << std::endl;
    std::cout << sizeof(numbers3[0]) << std::endl;
    std::cout << sizeof(numbers3) / sizeof(numbers3[0])
              << std::endl;                         // Способ как узнать длину массива - 1 Вариант
    std::cout << std::size(numbers3) << std::endl;  // Способ как узнать длину массива - 2 Вариант

    return 0;
}