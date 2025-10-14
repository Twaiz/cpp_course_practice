#include <iostream>

int InfiniteLoopsPractice() {
    int number1 = {0};
    int number2 = {0};
    unsigned char operand = {};
    bool continueCalculation = {true};

    while (continueCalculation) {
        unsigned char wantToContinue = {};

        std::cout << "Enter operand (+, -, *, /): ";
        std::cin >> operand;
        std::cout << "Enter two numbers: ";
        std::cin >> number1 >> number2;

        switch (operand) {
            case '+':
                std::cout << "Result: " << (number1 + number2) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << (number1 - number2) << std::endl;
                break;
            case '*':
                std::cout << "Result: " << (number1 * number2) << std::endl;
                break;
            case '/':
                if (number2 != 0) {
                    std::cout << "Result: " << (number1 / number2) << std::endl;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                }
                break;
            default:
                std::cout << "Invalid operand!" << std::endl;
                break;
        }

        std::cout << "Do you want to perform another calculation? (y/n): ";
        std::cin >> wantToContinue;
        switch (wantToContinue) {
            case 'y':
            case 'Y':
                continueCalculation = true;
                break;
            case 'n':
            case 'N':
                continueCalculation = false;
                break;
            default:
                std::cout << "Invalid input! Exiting." << std::endl;
                continueCalculation = false;
                break;
        }
    }

    return 0;
}
