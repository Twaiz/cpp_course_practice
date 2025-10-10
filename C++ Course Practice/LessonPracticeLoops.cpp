#include <iostream>
#include <string>

int LessonPracticeLoops() {
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

    // THIRD TASK

    unsigned int numbers[] = {1, 21, 4, 5, 7, 3, 9, 3, 5, 17, 15};
    unsigned int sumNumbers = {0};

    for (auto number : numbers) {
        if (number % 3 == 0) {
            std::cout << "Number : " << number << '\n';
            sumNumbers += 1;
        }
    }

    std::cout << "All numbers : " << sumNumbers << '\n';

    // FOURTH TASK

    const unsigned int COUT_FOURTH = {1000};
    unsigned int I_FOURTH = {100};
    unsigned int sumFourth = {0};

    do {
        if (I_FOURTH % 19 == 0) {
            sumFourth += 1;
            std::cout << "Number : " << I_FOURTH << '\n';
        }
        ++I_FOURTH;
    } while (I_FOURTH < COUT_FOURTH);

    std::cout << "All numbers : " << sumFourth << '\n';

    return 0;
}
