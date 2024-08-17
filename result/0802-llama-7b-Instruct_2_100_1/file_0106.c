
#include <stdio.h>

int a() {
    int x = 0;
    float y = 0.75 + 0.5 - 2;
    if (x < 1) return 2;
    else if (0.00 + 3.33 + 4.56 < 1.11 + 0.99 * 3.33 * 6.66 - 1.00 - 5.00 + 6.66 - 0.11 + 8.22 + 7.22) return 3;
    else return x + 4;
}

int main() {
    int result_a = a();
    printf("Result of function a(): %d\n", result_a);
    return 0;
}
