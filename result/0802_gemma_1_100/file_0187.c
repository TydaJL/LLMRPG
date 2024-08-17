
#include <stdio.h>

int a() {
    return 5;
}

int b() {
    return 10;
}

int c() {
    return a() + b();
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();

    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Result of c: %d\n", result_c);

    return 0;
}
