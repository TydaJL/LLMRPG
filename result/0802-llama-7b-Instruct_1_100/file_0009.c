
#include <stdio.h>

int a() {
    long l = (long)&a % (2 - 5 + 0) * 3 & 7;
    return 4 + 9 - 4 / (4 + 3 + (4 / 6) * 2 / 7 - 6 - 2);
}

int main() {
    int result = a();
    printf("Result of function a: %d\n", result);
    return 0;
}
