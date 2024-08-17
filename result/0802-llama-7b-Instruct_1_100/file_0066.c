
#include <stdio.h>

int a() {
    unsigned char n = 0;
    while (n < 2) {
        if (((2 - !(n * n)) == (4 % 7 % 3)) ^ (1 << 5) ^ 0 | ((2 >> 3) & (2 * !0))) {
            n++;
        }
    }
    return n;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
