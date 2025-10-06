#include <bitset>
#include <iostream>

#include "12Module.h"

int LogicalBitwiseOperators() {
    unsigned char data1 = {10};
    unsigned char data2 = {15};

    // value1 - 0000 1010 - bin
    // value2 - 0000 1111 - bin
    
    // 0000 1010 - ��� ����� ��� ������������� ����������� ��������� - AND (&)
    // 0000 1111 - ��� ����� ��� ������������� ����������� ��������� - OR (|)
    // 0000 0101 - ��� ����� ��� ������������� ����������� ��������� - XOR (^)
    // data1 - 1111 0101 - ��� ����� ��� ������������� ����������� ��������� - NOT (~)
    // data2 - 1111 0000 - ��� ����� ��� ������������� ����������� ��������� - NOT (~)


    std::cout << "data1 (bin) : " << std::bitset<8>(data1) << std::endl;
    std::cout << "data2 (bin) : " << std::bitset<8>(data2) << std::endl;

    // AND (&)
    std::cout << "AND (&) : " << std::bitset<8>(data1 & data2) << std::endl;  // 0000 1010

    // OR (|)
    std::cout << "OR (|) : " << std::bitset<8>(data1 | data2) << std::endl;  // 0000 1111

    // XOR (^)
    std::cout << "XOR (^) : " << std::bitset<8>(data1 ^ data2) << std::endl;  // 0000 0101

    // NOT (~)
    std::cout << "NOT (~) data1 : " << std::bitset<8>(~data1) << std::endl; // 1111 0101
    std::cout << "NOT (~) data2 : " << std::bitset<8>(~data2) << std::endl; // 1111 0000

    return 0;
}
