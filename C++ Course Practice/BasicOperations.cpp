#include <iostream>

int BasicOperations() {
	int number1 = { 10 };
	int number2 = { 15 };

	int sum1 = { number1 + number2 };
	int sum2 = { number1 - number2 };

	std::cout << "Sum1: " << sum1 << std::endl;
	std::cout << "Sum2: " << sum2 << std::endl;

	return 0;
}