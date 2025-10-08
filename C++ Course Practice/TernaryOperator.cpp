#include <iostream>

int TernaryOperator() {
    int trueOrFalse = 10 > 15 ? 1 : 0;
    bool boolTrueOrFalse = trueOrFalse;
    std::cout << std::boolalpha << boolTrueOrFalse << std::endl;

	return 0;
}