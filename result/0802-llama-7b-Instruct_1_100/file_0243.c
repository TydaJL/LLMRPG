
#include <stdio.h>

int a() {
    float result = 7 << 3 + 1 - 4 - 2 % 2 >> 3 | 1 & 4 + 6 % (5 % 8) * 3 >> 2 - 2 + 7 / 8 | 2 >> 3 - 8 << 1 & 5 * 1 + 2 & 6 | 3 % (float)((1 << (2 + (2 >> (8 + 3 & 6 >> 3 << 4 << 5 << 7))) >> 8 | 2 * 5 - 6 % 4 % 3);
    return (int)result;
}

int main() {
    int res = a();
    printf("%d\n", res);
    return 0;
}
