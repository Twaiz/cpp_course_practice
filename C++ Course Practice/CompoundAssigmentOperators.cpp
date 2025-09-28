#include <iostream>
#include "9Modules.h"

int CompoundAssigmentOperators() {
	int value = { 45 };
	
	value += 5; // value = value + 5;
	std::cout << "Value after += 5: " << value << std::endl;

	return 0;
}