
#include <stdio.h>

int a() {
    int i = 0;
    i += 4 % 4 - i / 4;
    return 2 - i - 3 - 2 + 6 % 3 * 4 - 4 / (i + 1) - 1 % 5;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
