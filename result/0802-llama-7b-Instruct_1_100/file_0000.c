
#include <stdio.h>

int a() {
    return 5;
}

int b = 0 + 6 * 1 - 2 ^ (a() << 1) + (3 ^ (a() * b) << 5 >> 1);

int main() {
    int result_a = a();
    printf("Result of a(): %d\n", result_a);
    printf("Value of b: %d\n", b);
    return 0;
}
