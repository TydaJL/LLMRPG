
#include <stdio.h>

int a() {
    int b = 7 >> (4 + 1) | 2 | (5 << (4 % 1) | (7 << 1 & 0 ^ (2 % 5 << (8 - 1) & (1 + 3 * 5 << 1) ^ 3) ^ (2 >> 4)) ^ (2 + 7));
    return b;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
