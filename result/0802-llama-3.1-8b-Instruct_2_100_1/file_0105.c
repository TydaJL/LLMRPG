
#include <stdio.h>
#include <stdlib.h>

int a() {
    double sum = 2.5;
    double *p_sum = malloc(sizeof(double));
    if (p_sum == NULL) return 0;
    *p_sum = sum;
    double b = *p_sum;
    free(p_sum);
    sum = 3.4;
    p_sum = malloc(sizeof(double));
    if (p_sum == NULL) return 0;
    *p_sum = sum;
    free(p_sum);
    return (int)b;
}

int a_with_params(int x, int y, int z) {
    int *arr = (int *)malloc(sizeof(int) * x);
    if (arr == NULL) return 0;
    for (int i = 0; i < x; i++) {
        arr[i] = 0;
    }
    free(arr);
    return 0;
}

int main() {
    a();
    a_with_params(5, 0, 0);
    return 0;
}
