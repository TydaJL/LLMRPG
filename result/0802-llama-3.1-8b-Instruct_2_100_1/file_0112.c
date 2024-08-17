
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* ptr = malloc(sizeof(int) * 1);
    *ptr = -100;
    int result = *ptr;
    free(ptr);
    return result;
}

double f(int n) {
    double* ptr = calloc(n, sizeof(double));
    int i;
    for (i = 0; i < n; i++) {
        ptr[i] = (double)(i * i);
    }
    double result = *(ptr + n - 1);
    free(ptr);
    return result;
}

int g(char c) {
    int arr[3] = {0, 0, 0};
    arr[0] = c;
    int sum = c * 10 + c * c + arr[1] * 2;
    return (sum * c) + c;
}

int main() {
    int result_a = a();
    printf("Result of a(): %d\n", result_a);

    double result_f = f(5);
    printf("Result of f(5): %lf\n", result_f);

    int result_g = g('A');
    printf("Result of g('A'): %d\n", result_g);

    return 0;
}
