
#include <stdio.h>

void function_a() {
    printf("Function A\n");
}

int function_x() {
    return 42;
}

int main() {
    function_a();
    int x = function_x();
    printf("Value of x: %d\n", x);
    return 0;
}
