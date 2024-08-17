
#include <stdio.h>

int a() {
    printf(" C :\n");
    return 5 + 7 - 11 / 12 + 2 * 10 + 3 / 3 % 4 + 4 + 3;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
