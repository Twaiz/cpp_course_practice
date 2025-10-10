#include <iostream>

int ForLoopMultipleDeclarations() {
    for (size_t i{0}, x{10}, y{15}, a{20}; y < 20; ++i, ++x, ++y, ++a) {
        std::cout << "i: " << i << ", x: " << x << ", y: " << y << ", a: " << a << '\n';
    }

    return 0;
}
