
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* arr;
    arr = (int*)malloc(10000 * sizeof(int));
    if (arr == NULL) {
        return -1;
    }
    free(arr);
    return 0;
}

double* b(void) {
    int c = 10;
    double* d;
    d = (double*)malloc(sizeof(double) * 10);
    if (d == NULL) {
        return NULL;
    }
    if (c >= 0 && c < 10) {
        d[c] = (((((c - 1) * c) * 1) - c) * c) * c) * c;
    }
    return d;
}

int c(int* arr, int n) {
    return 0;
}

int main() {
    a();
    double* result_b = b();
    if (result_b != NULL) {
        free(result_b);
    }
    int arr[10];
    c(arr, 10);
    return 0;
}
