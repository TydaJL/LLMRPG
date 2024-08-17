
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    for (i = 0; i <= 10000; i++) {
        for (int k = 1; i * k <= 100000; k++) {
            if (i * k % 10000 == 0 && i * k < 100000) return i;
        }
    }
    return -1;
}

int b(int n) {
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) return -1;
    for (int c = n; c > 1; c--) {
        int d = c;
        while (d > 1 && arr[d - 2] != 1) d--;
        arr[d - 2] = c;
    }
    int e = 1;
    int count = 0;
    for (; e <= n; ++e) {
        if (arr[e - 1] != 0) count++;
    }
    free(arr);
    return count;
}

int main() {
    int result_a = a();
    printf("Result of a(): %d\n", result_a);

    int n = 10;
    int result_b = b(n);
    printf("Result of b(%d): %d\n", n, result_b);

    return 0;
}
