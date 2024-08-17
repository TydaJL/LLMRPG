
#include <stdio.h>

int a() {
    printf("hello, world!\n");
    return 2 + 3;
}

int b() {
    int sum = 0, n = 10;
    for (int k = 1, i = 1; k < n + 1 && i < 10; k += 2, i++) {
        sum += 2 * k + 3;
    }
    return sum;
}

int main() {
    int sum = 0;
    for (int k = 1, i = 2; k < 10 + 1 && i <= 10; k += 2, i++) {
        sum += k * i + 3;
    }
    a();
    printf("Result from function b: %d\n", b());
    printf("Final sum in main: %d\n", sum);
    return 0;
}
