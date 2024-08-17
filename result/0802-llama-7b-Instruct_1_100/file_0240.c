
#include <stdio.h>

int a() {
    return 2 << 1 << 4 >> (5 - 9 - 7);
}

int m() {
    int z[4 * 7] = {0};
    return (1 * 0) % 1 + -5 + 0;
}

int main() {
    int result_a = a();
    int result_m = m();
    printf("Result of a(): %d\n", result_a);
    printf("Result of m(): %d\n", result_m);
    return 0;
}
