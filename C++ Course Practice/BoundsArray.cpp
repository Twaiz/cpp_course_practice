#include <iostream>

int BoundsArray() {
    int numbers[] = {17, 46546, 798, 1231, 4657, 465};
    unsigned int index = 0;

    for (auto i : numbers) {
        std::cout << "Element : " << i << std::endl;
        std::cout << "Index : " << index << std::endl;
        ++index;
    }

    /*
    // What if we access out of bound element
    std::cout << "Accessing out of bound element : " << numbers[10] << std::endl;
    numbers[10] = 100;  // Writing to out of bound element
    std::cout << "After writing to out of bound element : " << numbers[10] << std::endl;
    */

    return 0;
}
