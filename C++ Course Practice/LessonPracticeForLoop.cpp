#include <iostream>

int LessonPracticeForLoop() {
    const size_t COUNT = {99};
    size_t START_VALUE = {0};
    size_t sum = {0};

    for (START_VALUE; START_VALUE <= COUNT; START_VALUE++) {
        sum += START_VALUE;
        std::cout << "Current Value : " << START_VALUE << '\n';
    }

    std::cout << "Sum Value : " << sum << '\n';

    return 0;
}
