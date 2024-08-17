
#include <stdio.h>

int a() {
    return (7 % 9) / 4 * 7 % 1 / 8 + 8;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
