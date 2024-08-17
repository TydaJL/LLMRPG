
#include <stdio.h>

int a() {
    return 10 + 11 / 12 - (1 / 10.0 + 13 / 10.0 + 13 / 10.0) * (1 + 14 - 16 - 10 - 1 / 10.0 + 12 / 11.0 + 15 / 12.0 - 17 / 14.0 - 15 / 17.0 + 10.0 / 10.0 / 18.0 / 19.0 / 20.0 - 20 - 10);
}

int main() {
    int result = a();
    printf("Result of function a: %d\n", result);
    return 0;
}
