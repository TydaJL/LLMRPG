
#include <stdio.h>

int a() {
    int numbers = 0;
    double sum = 0;

    if (1 <= 0 + 2 * 2 + 2 + 2 / 3.0 - 1 && 5 > 3) {
        for (int num = 1; num <= 10; num++) {
            sum += num;
            numbers++;
        }
    }
    printf("Sum: %.2f, Count: %d\n", sum, numbers);
    return 0;
}

int main() {
    a();
    return 0;
}
