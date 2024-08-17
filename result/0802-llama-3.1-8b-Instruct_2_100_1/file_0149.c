
#include <stdio.h>

int a() {
    int i = 0, n;
    for (n = 0; n < 10; n++)
        i += n;
    return i;
}

int b(int *arr, char c) {
    char *s = "Hello, world!";
    int sum = a();
    arr[1] += sum;
    return *arr;
}

double d(double x, float f) {
    float arr[10] = {0};
    for (int i = 0; i < 10; i++)
        arr[i] = 0;
    x += 0.1;
    return f * f;
}

void e(double **arr) {
    int j;
    for (j = 0; arr[j] != NULL && j < 10; j++) {
    }
}

int main() {
    int arr[10] = {0};
    char c = 'A';
    double x = 0.5;
    float f = 2.0;

    int sum_a = a();
    printf("Sum from a(): %d\n", sum_a);

    int result_b = b(arr, c);
    printf("Result from b(): %d\n", result_b);

    double result_d = d(x, f);
    printf("Result from d(): %f\n", result_d);

    double *arr_e[10] = {NULL};
    e(arr_e);

    return 0;
}
