#include <iostream>
#include <string>
#include "9Modules.h"

int RelationalOperators() {
	int number1 = { 45 };
	int number2 = { 30 };
	std::string full_name = { "" };

	std::cout << std::boolalpha;
	
	std::cout << "Hi! Write your Full Name: " << std::endl;
	std::getline(std::cin, full_name);
	std::cout << "Hello, " << full_name << "!" << std::endl;

	std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
	std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
	std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
	std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
	std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
	std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

	std::cout << std::endl;
	std::cout << "store comparison result and use it later" << std::endl;

	bool result = (number1 == number2);

	std::cout << number1 << " == " << number2 << " : " << result << std::endl;

	return 0;
}
