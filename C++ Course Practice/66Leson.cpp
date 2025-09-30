#include <iostream>
#include <cmath>
#include "9Modules.h"

int LesonExersice() {
	double hexagon_area = ((3 * std::sqrt(3)) / 2) * (6.7 * 6.7);
	int hexagon_area_int = std::round(hexagon_area);

	std::cout << "Hexagon area (6.7 length): " << hexagon_area << std::endl;
	std::cout << "Hexagon area (6.7 length - DEC): " << std::dec << hexagon_area_int << std::endl;
	std::cout << "Hexagon area (6.7 length - OCT): " << std::oct << hexagon_area_int << std::endl;

	return 0;
}