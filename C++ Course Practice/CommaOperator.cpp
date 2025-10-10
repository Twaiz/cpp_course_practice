#include <iostream>

int CommaOperator() {
    int a = 1, b = 2, c = 3;
    int result = (a += 1, b += 2, c += 3);  // Comma operator
    
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    std::cout << "Result of comma expression: " << result << std::endl;

    return 0;
}
