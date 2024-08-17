
#include <stdio.h>

int a() {
    int sum = 0;
    long int i = 2;
    do {
        int isPrime = 1;
        for (long int k = 2; k * k <= i; k++) {
            if (i % k == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            sum++;
        }
        i += 1;
    } while (i < 12);
    return sum;
}

int main() {
    printf("%d\n", a());
    return 0;
}
