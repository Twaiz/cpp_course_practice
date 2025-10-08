#include <iostream>

int IntegralLogicConditions() { 
	if (10) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
	}

	if (-10) {
		std::cout << "Oops" << std::endl;
	} else {
		std::cout << "Yeee" << std::endl;
    }
	
	return 0; }