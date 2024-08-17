
#include <stdio.h>

int a() {
    return 10 + (20 - (20 / 5)) + (3 * 10) / 5 + 10 * (3 * 1 / 2 + 3 / 4);
}

int b() {
    return 1 + 1 + 1 * 1 * 1 + 1 * 1;
}

void c() {
    int i, j, x, y, z, m, k, n, p, t, q, s, r, o, l, w, e, a, b, c, d;
    i = 1 + 1;
}

int main() {
    int result_a = a();
    int result_b = b();
    c();
    printf("Result of a(): %d\n", result_a);
    printf("Result of b(): %d\n", result_b);
    return 0;
}
