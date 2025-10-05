#include <bitset>
#include <iostream>
#

int TestShiftOperators() {
    unsigned short int data = {10};
    std::cout << data;
    std::cout << std::bitset<16>(data) << std::endl;

    data = static_cast<unsigned short int>(data >> 1);
    std::cout << data;
    std::cout << std::bitset<16>(data) << std::endl;

    return 0;
}
