#include <bitset>
#include <iostream>

#include "12Module.h"

int LogicalBitwiseOperators() {
    unsigned char data1 = {10};
    unsigned char data2 = {15};

    // value1 - 0000 1010 - bin
    // value2 - 0000 1111 - bin
    
    // 0000 1010 - что будет при использовании логического оператора - AND (&)
    // 0000 1111 - что будет при использовании логического оператора - OR (|)


    std::cout << "data1 (dec) : " << std::showbase << std::dec << data1 << std::endl;
    std::cout << "data1 (bin) : " << std::bitset<8>(data1) << std::endl;

    std::cout << "data2 (dec) : " << std::showbase << std::dec << data2 << std::endl;
    std::cout << "data2 (bin) : " << std::bitset<8>(data2) << std::endl;

    // AND (&)
    std::cout << "AND (&) : " << std::bitset<8>(data1 & data2) << std::endl;  // 00001010

    // OR (|)
    std::cout << "AND (&) : " << std::bitset<8>(data1 | data2) << std::endl;  // 00001010

    return 0;
}
