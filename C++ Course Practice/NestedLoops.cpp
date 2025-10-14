#include <iostream>

int NestedLoops() { const size_t ROWS = {12};
    const size_t COLS = {3};

    for (size_t row{0}; row < ROWS; ++row) {  // 12 iterations

        for (size_t col{0}; col < COLS; ++col) {  // 3 iterations
            std::cout << row << ", " << col << " | ";
        }

        std::cout << '\n';
    }
}