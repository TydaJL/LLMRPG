
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void a() {
    int *x, *y, i, j, k, m, l, t, r;
    x = malloc(1024 * sizeof(int));
    y = calloc(1000, sizeof(int));

    m = (int)sqrt(1024 * 1024);
    t = (int)pow(2, 3 * m * m);
    r = (int)(t - (double)(m + m));
    k = 0;
    l = (int)(100 * (10 * m));

    while (k < 1024 && k <= l) {
        x[k] = r * k;
        k++;
    }

    for (i = 0; i < 1024 && i <= l; i++) {
        printf("%d ", x[i]);
    }

    free(x);
    free(y);
}

int main() {
    a();
    return 0;
}
