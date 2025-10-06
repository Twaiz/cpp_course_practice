#include <bitset>
#include <iostream>

#include "12Module.h"

int LogicalBitwiseOperators() {
    unsigned char data1 = {10};
    unsigned char data2 = {15};

    std::cout << "data1 (dec) : " << std::showbase << std::dec << data1 << std::endl;
    std::cout << "data1 (bin) : " << std::bitset<8>(data1) << std::endl;

    std::cout << "data2 (dec) : " << std::showbase << std::dec << data2 << std::endl;
    std::cout << "data2 (bin) : " << std::bitset<8>(data2) << std::endl;

    return 0;
}
