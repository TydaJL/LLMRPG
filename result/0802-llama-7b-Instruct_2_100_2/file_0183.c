
#include <stdio.h>

int a() {
    return 1 + a() * ((1 << 31) + 2) + (((1) * (1) + 2) + 2) * (2);
}

int main() {
    printf("%i\n", (a() * (((1 << 1) << 5) << 1) * ((1 << (1 << 6)) + 4) + 2));
    printf("%i\n", (((1 << (31 - 2)) >> (2 - 1)) + 1) + (1 << 1) + (1 << (1)));
    return 0;
}
