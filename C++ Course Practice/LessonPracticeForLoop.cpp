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

    unsigned char ch = 'A';
    std::cout << "Character : " << ch << " ASCII Value : " << static_cast<int>(ch) << '\n';

    /*for (size_t i{101}; i <= 132; ++i) {
        unsigned char ch = static_cast<unsigned char>(i);
        std::cout << "ASCII Value : " << i << " Character : " << ch << '\n';
    }*/

    return 0;
}
