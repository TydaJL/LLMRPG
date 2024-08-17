
#include <stdio.h>

int a() {
    return 3;
}

int b(int b) {
    return b * 10 + (20 - 100 / 3 + a() - 0 / 2 % 1 + 0 * 100);
}

int main() {
    int result_a = a();
    int result_b = b(5);
    
    printf("Result of a(): %d\n", result_a);
    printf("Result of b(5): %d\n", result_b);

    return 0;
}
