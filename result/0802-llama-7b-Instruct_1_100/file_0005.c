
#include <stdio.h>

int a() {
    int b = 34 / 2 + 3;
    int c = b + b;
    return c / 2;
}

void function_b() {
    int a = 0;
    a = a + 1;
}

int main() {
    int result = a();
    printf("Result of a: %d\n", result);
    function_b();
    return 0;
}
