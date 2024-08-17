
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 100;
    int *b;
    b = (int *)malloc(n * sizeof(int));
    int *c = (int *)calloc(2, n * sizeof(int));
    int i;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += i;
    }
    free(b);
    free(c);
    return sum;
}

int b(int *arr) {
    int i, j = 0;
    int n = 0;
    while (arr[n] && n < 1000 && j < 10) {
        j++;
        n++;
    }
    return j;
}

int c() {
    int *d;
    d = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        d[i] = i;
    }
    free(d);
    return 0;
}

int main() {
    int sum_a = a();
    printf("Sum from function a: %d\n", sum_a);
    int arr[100] = {0};
    int count_b = b(arr);
    printf("Count from function b: %d\n", count_b);
    c();
    return 0;
}
