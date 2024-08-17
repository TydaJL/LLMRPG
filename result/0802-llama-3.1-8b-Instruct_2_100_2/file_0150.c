
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *p, *q, i, n = 10;
    p = (int *)malloc(n * sizeof(int));
    if (!p) {
        return -1;
    }
    for (i = 0; i < n; i++) {
        p[i] = i;
    }
    
    q = (int *)malloc(n * sizeof(int));
    if (!q) {
        free(p);
        return -1;
    }
    
    for (i = 0; i < n; i++) {
        q[i] = (int)((double)(2 * i) + ((double)(i * (double)i)));
    }
    
    free(p);
    free(q);
    return 0;
}

int main() {
    a();
    return 0;
}
