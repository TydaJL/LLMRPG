
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int main() {
    int result_a = a();
    int result_b = b();

    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);

    return 0;
}
