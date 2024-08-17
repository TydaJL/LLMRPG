
#include <stdio.h>

int a() {
    return 6 << (5 >> (8 % 4 * 3 >> 6 / 2) << (((5 ^ 6 & (2 > 3) << 3) + 4) ^ 2 & (0 + 6) ^ (6 / (7 / (2 > 6)))));
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
