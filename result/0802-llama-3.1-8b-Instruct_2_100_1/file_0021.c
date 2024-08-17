
#include <stdio.h>
#include <stdlib.h>

int a() {
    double *p, *r, *x = malloc(sizeof(double) * 10); // Adjusted to allocate more space
    if (x == NULL) {
        return -1;
    }
    for (int i = 0; i < 10000000; ++i) {
        r = p = x;
        p += (i % 10); // Ensure index is within bounds
        *p -= (double)(i + 1);
        p += (i % 10); // Ensure index is within bounds
        *p -= (double)(i + 2);
        p -= 1; // Adjust pointer arithmetic
        *p += (i + 3);
        r -= (i % 10); // Ensure index is within bounds
        r += (i % 10 + 4); // Ensure index is within bounds
    }
    free(x);
    return 1;
}

int main() {
    a();
    return 0;
}
