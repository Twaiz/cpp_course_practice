#include <iostream>

int WhileLoop() {
    unsigned int i = {0};
    unsigned int COUT = {10};

    while (i < 10) {
        std::cout << "Number : " << i << "\n";
        ++i;
    }

    return 0;
}
