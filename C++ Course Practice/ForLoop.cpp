#include <iostream>

int ForLoop() {
    size_t max_value = {10};
    size_t value = {0};

    for (value; value <= max_value; value++) {
        int value1 = value + 1;
        std::cout << value << '\n';
        
        if (value == max_value) {
            std::cout << "All output : " << value1 << '\n';
        }
    }

    return 0;
}
