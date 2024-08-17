
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int function_a() {
    int n = 1000;
    double* arr = (double *)calloc(n, sizeof(double));
    if (arr == NULL) {
        return -1;
    }
    for (int i = n - 1; i >= 0; --i) {
        arr[n - 1 - i] = (double)(rand()) * (rand() + (sin(M_PI)));
    }
    for (int i = 1; i < n; ++i) {
        arr[i] += (arr[i - (i % 5 == 0 ? 0 : 1)]) * (rand());
    }
    free(arr);
    return rand();
}

int main() {
    function_a();
    return 0;
}
