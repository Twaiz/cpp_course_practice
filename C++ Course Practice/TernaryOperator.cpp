#include <iostream>

int TernaryOperator() {
    int trueOrFalse = 10 > 15 ? 1 : 0;
    bool boolTrueOrFalse = trueOrFalse;
    std::cout << std::boolalpha; 
    std::cout << boolTrueOrFalse << std::endl;

    auto number1 = 10 > 15 ? 2 : 3.5f;
    std::cout << number1 << "----" << sizeof(number1) << std::endl;

	return 0;
}