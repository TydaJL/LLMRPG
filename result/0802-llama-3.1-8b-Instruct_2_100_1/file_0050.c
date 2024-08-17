
#include <stdio.h>
#include <stdlib.h>

void a() {
    int i, j, n;
    int *x, *y, **z;
    char *str = "hello, world!";
    char *str2 = "goodbye, world!";
    int sum = 0;
    n = 10;

    x = (int *)malloc(n * sizeof(int));
    y = (int *)calloc(n * n + n, sizeof(int));
    z = (int **)malloc((n * n) * sizeof(int *));

    for (j = n * n; j > 0; j--) {
        z[j - 1] = (int *)realloc(x, sizeof(int) * (n * j + j));
        if (z[j - 1] == NULL) {
            free(x);
            free(y);
            free(z);
            return;
        }
        x = z[j - 1];
        for (i = 0; i < j; i++) {
            x[i] = i;
            sum += x[i];
        }
    }

    printf("Sum: %d\n", sum);
    free(x);
    free(y);
    free(z);
}

int main() {
    a();
    return 0;
}
