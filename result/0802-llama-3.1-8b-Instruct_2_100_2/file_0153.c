
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i, n, x, y, z;
    n = 100000;
    int *p = malloc(n * sizeof(int));
    if (p == NULL) {
        return -1;
    }
    for (i = 0; i < n; i++) {
        x = i * i + 2 * i + 1;
        z = i * x;
        y = z + 2 * i;
        p[i] = y + x;
    }
    free(p);
    return n;
}

int main(void) {
    int count = a();
    printf("The number of elements in the array is : %d\n", count);
    return count;
}
