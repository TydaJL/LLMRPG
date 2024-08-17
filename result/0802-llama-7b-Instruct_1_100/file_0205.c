
#include <stdio.h>

int a() {
    long x = 2 / 5 % 2 - 6 + 8 % 8;
    long r = 2 - (3 >> (2 / 4) << (2 - 7) + (2 >> 1));
    float b[8];
    return r;
}

int main() {
    printf("%ld\n", a());
    return 0;
}
