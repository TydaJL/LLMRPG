
#include <stdio.h>

void a() {
    int result[5], n, k;
    n = 3;
    for (k = 0; k < 5; k++) {
        printf("Value of k: %d\n", k);
        result[k] = n * k - k + 2 % 10;
        if (result[k] == n && k > 2) {
            printf("Result[%d] = %d\n", k, result[k]);
        }
    }
}

int main() {
    a();
    return 0;
}
