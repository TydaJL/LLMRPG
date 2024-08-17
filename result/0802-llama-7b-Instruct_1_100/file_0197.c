
#include <stdio.h>

int a() {
    long result = 1;
    long b = 2, c = 3, d = 4;
    result = (result >> (1 % b)) + (1 >> (c & (1 * (c ^ 1 - (1 << (d + c - 1))) >> (1 | (2 - d))) * 1)) + (b >> ((c >> d) - (c >> c ^ 1 + (((d >> c ^ (c >> (0 * b & 0 * d))) / 2) >> 0 >> d) & (d >> 1 * c >> b >> c) - b) & (0)));
    return result;
}

int main() {
    printf("%ld\n", a());
    return 0;
}
