
#include <stdio.h>

int a() {
    return (4 / 5) >> 6 | (4 % 4) ^ ((4 >> (8 - 1)) & (3 << (8 + 8)));
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
