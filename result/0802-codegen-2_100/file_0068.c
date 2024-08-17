
#include <stdio.h>

int a() {
    return 5 * 5 * (5 * 5 * 5);
}

int b(int i, int n) {
    return i + n;
}

int c(int n) {
    return n * n;
}

int d(char c, int n) {
    return c - 'A' + n;
}

int main(int argc, char *argv[]) {
    int z = a();
    int result_b = b(z, 1);
    int result_c = c(3);
    int result_d = d('B', 2);

    printf("Result of a: %d\n", z);
    printf("Result of b: %d\n", result_b);
    printf("Result of c: %d\n", result_c);
    printf("Result of d: %d\n", result_d);

    return 0;
}
