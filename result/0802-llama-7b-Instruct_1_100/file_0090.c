
#include <stdio.h>

int a() {
    return 4 >> 6 & ~ ~ 4 & 4 % ( 2 / 3 << ~4 & ~1 ) << (6 + (7 << (7 & 7 | 4 % 2)));
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
