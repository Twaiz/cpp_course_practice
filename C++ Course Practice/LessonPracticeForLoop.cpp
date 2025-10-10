#include <iostream>
#include <string>

int LessonPracticeForLoop() {
    /* FIRST TASK */

    const size_t COUNT = {99};
    size_t START_VALUE = {0};
    size_t sum = {0};

    for (START_VALUE; START_VALUE <= COUNT; START_VALUE++) {
        sum += START_VALUE;
        std::cout << "Current Value : " << START_VALUE << '\n';
    }

    std::cout << "Sum Value : " << sum << '\n';

    /* SECOND TASK */

    std::string allCh = "";

    for (size_t i{65}; i <= 90; ++i) {
        unsigned char ch = static_cast<unsigned char>(i);
        
        if (i == 65) {
            allCh += ch;
            continue;
        }

        allCh += " ";
        allCh += ch;
    }

    std::cout << "All Characters : " << allCh << '\n';

    return 0;
}
