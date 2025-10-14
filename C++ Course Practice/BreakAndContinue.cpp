#include <iostream>

int BreakAndContinue() {
    for (int i{0}; i < 10; ++i) {
        if (i == 4) {
            std::cout << "Breaking out of the loop\n";
            break;  // exit the loop
        }
        if (i == 2) {
            std::cout << "Skipping 2\n";
            continue;  // skip the rest of the loop body
        }
        std::cout << i << '\n';
    }
    
    std::cout << "Loop complete\n";
    
    return 0;
}
