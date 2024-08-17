
#include <stdio.h>

int a() {
    return 2 - (int)2.0 - 3 * (int)0.5 - 1 + 3 % 3;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
