
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

int b() {
    return 0;
}

int c(int x, double y) {
    return x + (int)y;
}

int main() {
    int i, j;
    double k;
    int *p;

    p = (int *)calloc(2, sizeof(int));
    if (p == NULL) {
        return 1;
    }

    i = a();
    j = b();
    k = c(5, 2.3);
    
    free(p);

    return 0;
}
