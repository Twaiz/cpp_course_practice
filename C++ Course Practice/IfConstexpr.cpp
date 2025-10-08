#include <iostream>

int IfConstexpr() {
	if constexpr (sizeof(int) == 4) {
		std::cout << "int is 4 bytes\n";
	} else {
		std::cout << "int is not 4 bytes\n";
    }
}