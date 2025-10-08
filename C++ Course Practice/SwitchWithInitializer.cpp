#include <iostream>

int SwitchWithInitializer() {
    int value = 2;
    switch (int localValue = value * 2; localValue) {
        case 1:
            std::cout << "Case 1: localValue is " << localValue << std::endl;
            break;
        case 2:
            std::cout << "Case 2: localValue is " << localValue << std::endl;
            break;
        case 4:
            std::cout << "Case 4: localValue is " << localValue << std::endl;
            break;
        default:
            std::cout << "Default case: localValue is " << localValue << std::endl;
            break;
    }

    // Note: localValue is not accessible here
    // std::cout << localValue; // This would cause a compilation error
    return 0;
}
