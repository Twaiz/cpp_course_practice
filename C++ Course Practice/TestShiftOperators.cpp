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

    return 0;
}
