
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n;
    int *x;
    int i;
    n = 10000000;
    x = (int *) malloc(n * sizeof(int));
    if (x == NULL)
        return -1;
    for (i = 0; i < n; i++) {
        x[i] = 0;
    }
    for (i = 2; i < n; i++) {
        x[i] = 2 * (i + 1);
    }
    x[n - 1] = x[n - 2] - x[n - 3];
    free(x);
    return n;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
