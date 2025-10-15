#include <iostream>

int DeclaringAndUsingArrays() {
    int numbers1[5];

    for (int number : numbers1) {
        std::cout << number << std::endl;
    }

    return 0;
}
