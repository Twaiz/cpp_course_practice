#include <iostream>
#include "9Modules.h"

int CompoundAssigmentOperators() {
	int value = { 45 };
	
	value += 5; // value = value + 5;
	std::cout << "Value after += 5: " << value << std::endl;

	value -= 5; // value = value - 5;
	std::cout << "Value after -= 5: " << value << std::endl;

	value *= 2; // value = value * 2;
	std::cout << "Value after *= 2: " << value << std::endl;

	value /= 3; // value = value / 3;
	std::cout << "Value after /= 3: " << value << std::endl;

	value %= 4; // value = value % 4;
	std::cout << "Value after %= 4: " << value << std::endl;

	return 0;
}