
#include <stdio.h>

int a() {
    return (3 * 1 << 4) | (5 & (7 * (8 >> 6)));
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
