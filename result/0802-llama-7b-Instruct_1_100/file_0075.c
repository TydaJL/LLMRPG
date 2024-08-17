
#include <stdio.h>

int a() {
    int x = 9 % 5 + 1 + (8 ^ 3) + (6 / 5) | (8 + (2 ^ 1 - 3 + 0 % 2 * 4 + 1 - 6 + 7));
    return x;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
