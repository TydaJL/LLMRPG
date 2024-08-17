
#include <stdio.h>

int a() {
    unsigned t = 2 << 3 << 5 >> (9 % 6) - (6 % 8) & (2 / 1 << 4 + 9 - 2 + 3 >> 5 >> 3) ^ (6 % 2 ^ 9 ^ (5 - 3 + 9 + 7) | (3 + 2) | (2 * 9 % 6 >> 6 & 4 / 1 % 6 >> 7) ^ (1 ^ 3 >> 9) & (2 + 3 >> 2 / 2 % 7) ^ (9 & 6 * 4 & 2 / 5 / 4 % 5);
    return t;
}

int main() {
    unsigned int result = a();
    printf("%u\n", result);
    return 0;
}
