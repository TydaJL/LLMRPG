
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 10, **b;
    b = (int **)malloc(sizeof(int *) * n);
    for (int j = 0; j < n; ++j) {
        b[j] = (int *)malloc(sizeof(int) * n);
        for (int i = 0; i < n; ++i) {
            b[j][i] = i;
        }
    }
    int result = b[n - 1][n - 1];

    for (int j = 0; j < n; ++j) {
        free(b[j]);
    }
    free(b);

    return result;
}

int main() {
    int value = a();
    printf("The value returned from function a is: %d\n", value);
    return 0;
}
