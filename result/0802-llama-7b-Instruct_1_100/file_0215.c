
#include <stdio.h>
#include <stdlib.h>

int a() {
    int result = ((5 * 2) + (5 % 1) - (5 * 3) > 1) > (5 << 7) | ((3 * 2) << 6 - (8 % 9) * (5 * 6) > (5 % 4) >> (8 / 6) / 3) ^ (4 * 7) > (2 + (7 >> 2) < (5 * 6) / 6 - 4 < (2 * 4) < 1 < (3 / 8) << 5 + 1 < (6 + 7) > 6);
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
