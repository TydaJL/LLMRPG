
#include <stdio.h>

int a() {
    return 0 + 3 % 6 + 3 * 1 + 7 - 4 + 7 / 8 + 9 + 11 / 4 + 3 + 11 + 10 + 4 + 2 + 1 + 5 + 5 / 4 + 1 - 6;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
