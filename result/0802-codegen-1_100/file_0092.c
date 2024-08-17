
#include <stdio.h>

int a() {
    return 2 - 5 * 6 % 3 + 9;
}

int main() {
    int result = a();
    printf("Result of function a: %d\n", result);
    return 0;
}
