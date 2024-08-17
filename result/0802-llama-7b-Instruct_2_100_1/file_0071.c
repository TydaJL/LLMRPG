
#include <stdio.h>

int a() {
    int b = 5;
    while (b > 0) {
        b = b - 1;
    }
    return b;
}

int f() {
    return 0;
}

int main() {
    int result_a = a();
    int result_f = f();
    printf("Result of a(): %d\n", result_a);
    printf("Result of f(): %d\n", result_f);
    return 0;
}
