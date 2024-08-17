
#include <stdio.h>

int a() {
    return 4 / 2 * (5 * 8 % 1) / 9 - (1) + 10;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
