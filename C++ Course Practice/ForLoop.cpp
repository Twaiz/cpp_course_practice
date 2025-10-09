#include <iostream>

int ForLoop() {
    size_t max_value = {10};
    size_t value = {0};

    for (value; value <= max_value; value++) {
        std::cout << value << '\n';
        
        if (value == max_value) {
            std::cout << "All output : " << ++value << '\n';
        }
    }

    std::cout << sizeof(size_t) << '\n';
    std::cout << sizeof(unsigned int) << '\n';

    return 0;
}
