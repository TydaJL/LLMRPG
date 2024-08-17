
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *n = (int *)malloc(sizeof(int));
    if (n == NULL) {
        exit(1);
    }
    *n = 10;
    int result = *n;
    free(n);
    return result;
}

void b() {
    int *x = malloc(10 * sizeof(int));
    if (x == NULL) {
        exit(1);
    }
    for (int i = 0; i < 10; i++) {
        x[i] = i;
    }
    free(x);
}

int main() {
    b();
    int result = a() + 5;
    printf("%d\n", result);
    return 0;
}
