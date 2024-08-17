
#include <stdio.h>

#define N 1000

int a() {
    return -N * 3.0 * 5.0 - 7 * N - (N * N + 3);
}

int d(int i, int *v) {
    if (i < 0) {
        return -2;
    }
    return v[i];
}

int main() {
    printf("Value from function a: %lf\n", a());
    int arr[] = {1, 2, 3, 4, 5};
    printf("Value from function d: %d\n", d(2, arr));
    return 0;
}
