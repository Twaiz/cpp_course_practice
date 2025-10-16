#include <iostream>

int GeneratingRandomNumbers() {
    std::srand(std::time(0));

    int randomNumber1 = std::rand() % 16; // 0 --- 15
    int randomNumber2 = std::rand() % 15 + 1;  // 1 --- 15
    
    std::cout << "Random Number 1 : " << randomNumber1 << std::endl;
    std::cout << "Random Number 2 : " << randomNumber2 << std::endl;

    return 0;
}
