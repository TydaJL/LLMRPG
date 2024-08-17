
#include <stdio.h>

int a() {
    return 10 - (10 - 3 / 10 * 100);
}

int foo() {
    return (2 < 3 + 3) ? (1 > 100 / 10) : 1;
}

int main() {
    int result_a = a();
    int result_foo = foo();
    printf("Result of a(): %d\n", result_a);
    printf("Result of foo(): %d\n", result_foo);
    return 0;
}
