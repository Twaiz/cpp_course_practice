#include <iostream>

int static_var = {10};  // static storage duration : dies when program ends

void someFunction() {
    int local_var = 5;                 // local storage duration : dies when function ends
    static int static_local_var = 20;  // static storage duration : dies when program ends
}

int VariableLifetime() {
    int local_var = 10;
    int dynamic_var = 15;

    {
        int local_var = 20;
        int dynamic_var = 35;
    }

    return 0;
}
