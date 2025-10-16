#include <iostream>

int EliminatingDuplicates() {
    int data1[] = {12, 3, 21, 3, 8, 2, 21, 4, 3};
    int data2[] = {7, 5, 7, 2, 4, 1, 7, 4, 2};

    const int sizeData1 = std::size(data1);

    int uniqueNumbers[sizeData1] = {0};
    int allNumbers[sizeData1] = {0};

    for (size_t i = {0}; i < sizeData1; ++i) {
        int currentNumber = data1[i];

        std::cout << "Current Number : " << currentNumber << std::endl;
        std::cout << "All Numbers : " << allNumbers << std::endl;
        std::cout << "Unique Numbers : " << uniqueNumbers << std::endl;

        for (int number : allNumbers) {
            if (currentNumber != number) {
                uniqueNumbers[i] = currentNumber;
            } else if (currentNumber == number) {
                uniqueNumbers[i] = 0;
            }
        }

        allNumbers[i] = currentNumber;
    }

    std::cout << "Unique numbers from data1 : " << uniqueNumbers << std::endl;

    return 0;
}
