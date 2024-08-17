
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 0;
    int i, j;
    char s[10][10];
    int *x = malloc(1000 * sizeof(int));

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            x[i * 100 + j] = i + j;
        }
    }

    for (i = 0; i < 100; i++) {
        n = x[500 + i];
    }

    free(x);
    return n;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
