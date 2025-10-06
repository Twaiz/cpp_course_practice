#include <bitset>
#include <iostream>

#include "12Module.h"

int TestMasks() {
    const unsigned char MASK1{0b00000001};  // Mask for bit 0
    const unsigned char MASK2{0b00000010};  // Mask for bit 1
    const unsigned char MASK3{0b00000100};  // Mask for bit 2
    const unsigned char MASK4{0b00001000};  // Mask for bit 3
    const unsigned char MASK5{0b00010000};  // Mask for bit 4
    const unsigned char MASK6{0b00100000};  // Mask for bit 5
    const unsigned char MASK7{0b01000000};  // Mask for bit 6
    const unsigned char MASK8{0b10000000};  // Mask for bit 7

    unsigned char value = {0b00000000};

    value |= MASK2;  // Set bit 1
    std::cout << "After setting bit 1: " << std::bitset<8>(value) << std::endl;

    value ^= MASK2;  // Reset bit 1 - 1 Variant
    std::cout << "After setting bit 1: " << std::bitset<8>(value) << std::endl;
    value &= (~MASK2);  // Reset bit 1 - 2 Variant
    std::cout << "After setting bit 1: " << std::bitset<8>(value) << std::endl;

    return 0;
}
