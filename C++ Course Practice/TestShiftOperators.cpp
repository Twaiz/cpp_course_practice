#include <bitset>
#include <iostream>

#include "12Module.h"

int TestShiftOperators() {
    unsigned short int data = {10};
    std::cout << data << std::endl;
    std::cout << std::bitset<16>(data) << std::endl;

    // >> Right shift - divides by 2^n
    // >> Left shift - multiplies by 2^n

    data = static_cast<unsigned short int>(data >> 1);
    std::cout << data << std::endl;
    std::cout << std::bitset<16>(data) << std::endl;

    data = {10};

    data = static_cast<unsigned short int>(data << 1);
    std::cout << data << std::endl;
    std::cout << std::bitset<16>(data) << std::endl;

    data = {10};
    data = static_cast<unsigned short int>(data << 2);
    std::cout << data << std::endl;
    std::cout << std::bitset<16>(data) << std::endl;

    data = {10};
    data = static_cast<unsigned short int>(
        data >> 2);  // у нас выйдет 2, потому что 10 / 4 = 2.5, а дробная часть отбрасывается
    std::cout << data << std::endl;
    std::cout << std::bitset<16>(data) << std::endl;

    return 0;
}
