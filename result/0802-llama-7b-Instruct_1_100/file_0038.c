
#include <stdio.h>

int a() {
    int r = (-2 % 7) - 3 == (6 ^ (0 % 2 != (8 & (0 < (5 + 5 / 5) << 9 >> 8)))) ^ (5 + 3) ^ (7 * 9 - 3 + 2 >> (4 * 3) << (9 - 5 & 8)) ^ (4 >> 2 & (3 >> (7 << 5 + 1 + 9 / 8) & (8 << 2 * 1))) | (4 - 9 & 6) | (3 << 4 << 4 ^ 7 ^ (5 >> (5 << 3 % 1)));
    return r;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
