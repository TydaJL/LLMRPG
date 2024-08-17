
#include <stdio.h>

int a() {
    return 10;
}

int b(int num) {
    return num + 10;
}

int main() {
    int result_a = a();
    int result_b = b(result_a);
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    return 0;
}
