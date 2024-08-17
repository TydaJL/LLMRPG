
#include <stdio.h>
#include <time.h>

int a() {
    double result = ((double)clock() / CLOCKS_PER_SEC) * 3.0 - 3.0 * 5 / 6 / 8 * 3.0 + 5.0 / 6.0 / 3.0 / 2.0 / 8.0 / 6.0;
    return (int)result;
}

int main() {
    int value = a();
    printf("Result of function a: %d\n", value);
    return 0;
}
