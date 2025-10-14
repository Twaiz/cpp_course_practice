#include <iostream>

int DoWhileLoop() {
    size_t i = {0};
    const size_t COUT = {10};
    
    do {
        std::cout << "Number : " << i << "\n";
        ++i;
    } while (i < COUT);

    return 0;
}
