
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 10;
    int *x = calloc(n + 2, sizeof(int));
    if (x == NULL) {
        return -1;
    }
    x[n + 1] = 1;
    for (int y = 1; y < n + 2; y++) {
        x[y] *= y;
    }

    int sum = (x[n + 1]) - (x[n]);
    int i = 0;
    int s = 0;
    int r = 0;

    for (int y = n + 1; y > 3; y--) {
        r = r * (y - n) + (x[y]);
    }
    s += r;
    sum += (s - (i));

    free(x);
    return sum;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
