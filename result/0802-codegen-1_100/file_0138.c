
#include <stdio.h>

int a() {
    return 0;
}

int g() {
    return 2;
}

int main() {
    int result_a = a();
    int result_g = g();
    printf("Result of a: %d\n", result_a);
    printf("Result of g: %d\n", result_g);
    return 0;
}
