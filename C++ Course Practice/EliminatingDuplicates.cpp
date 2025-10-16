#include <iostream>
#include <iterator>  

int EliminatingDuplicates() {
    int data1[] = {12, 3, 21, 3, 8, 2, 21, 4, 3};
    const int sizeData1 = std::size(data1);

    int uniqueNumbers[sizeData1] = {0};
    int uniqueCount = 0;
    bool isDuplicate;

    for (int i = 0; i < sizeData1; ++i) {
        int currentNumber = data1[i];
        isDuplicate = false; 

        for (int j = 0; j < uniqueCount; ++j) {
            if (currentNumber == uniqueNumbers[j]) {
                isDuplicate = true; 
                break;               
            }
        }

        if (!isDuplicate) {
            uniqueNumbers[uniqueCount] = currentNumber;
            uniqueCount++;
        }
    }

    std::cout << "Unique numbers from data1: ";
    for (int i = 0; i < uniqueCount; ++i) {
        std::cout << uniqueNumbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
