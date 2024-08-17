
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = malloc(sizeof(int));
    if (b == NULL) {
        return 0;
    }
    *b = 5;
    int result = *b + 3;
    free(b);
    return result;
}

int c(int x, int n) {
    int *e = malloc((n + 2) * sizeof(int));
    if (e == NULL) {
        return 0;
    }
    int d;
    for (d = 0; d < n + 2; d++) {
        e[d] = 0;
    }
    for (d = x; d >= x - n; d--) {
        e[d - x] += d;
    }
    int result = *e + x;
    free(e);
    return result;
}

int main() {
    int m = a();
    int o[5] = {0};
    o[m % 4] = 3;
    if (m != 0) {
        o[(m - (5 - m) % m / m + m) % m] += c(m, m - (5 - m) / m);
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", o[i]);
    }
    printf("\n");
    return 0;
}
