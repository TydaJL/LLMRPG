
#include <stdio.h>

int a() {
    return (5 % 2 + (5 % 1 > (4 / 7 / 4)) > (3 >> (2 * 7) & 2 ^ 3) & ~1 < 2 & (7 ^ 6) + (~1 & 2) & ~1 | (1 < 1) | (4 < (5 >> 3) >> 2) + (5 < (6 + 8 & ~7) * 2 < ~4) & (6 < 7) & (9 + 3 < 1) | (1 < (~4 % ~5 + 6 + 6) & (3 < 2) & (6 % 2)));
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
