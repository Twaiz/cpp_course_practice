#include <iostream>

int ForLoop() {
    for (unsigned int value{}; value < 10; ++value) {
        std::cout << value << '\n';
    }

    return 0;
}
