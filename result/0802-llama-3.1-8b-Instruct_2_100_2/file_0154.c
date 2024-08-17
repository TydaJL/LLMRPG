
#include <stdio.h>

int a() {
    int i, j, k = 0;
    for (i = 2; i <= 50000000; i++) {
        int isPrime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            k++;
        }
    }
    return k;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
