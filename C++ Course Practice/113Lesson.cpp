#include <iostream>

int LesonPracticeForLoop() {
    size_t COUNT = {99};
    size_t START_VALUE = {0};
    unsigned int sum = {0};

    for (START_VALUE; START_VALUE < COUNT; START_VALUE++) {
        sum = +START_VALUE;
        std::cout << "Current Value : " << START_VALUE << '\n';
    }

    std::cout << "Sum Value : " << sum << '\n';

    return 0;
}
