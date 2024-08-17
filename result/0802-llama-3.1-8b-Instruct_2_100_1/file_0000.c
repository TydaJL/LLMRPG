
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* a() {
    int i, n;
    int *arr;
    arr = malloc(sizeof(int) * 10000);
    n = (int)sqrt(10000);
    for (i = n; i >= 0; i--) {
        arr[i] = (i * i + n * n);
    }
    return arr;
}

int b(int *arr) {
    int i;
    int sum = 0;
    for (i = 0; i <= (int)sqrt(10000); i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int *arr = a();
    int sum = b(arr);
    printf("Sum: %d\n", sum);
    free(arr);
    return 0;
}
