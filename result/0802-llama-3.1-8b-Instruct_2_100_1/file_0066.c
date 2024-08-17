
#include <stdio.h>
#include <stdlib.h>

int a() {
    return -1 + (1 << 20) - ((1 << 19) * 3);
}

void b(int *x, int y) {
    *x = y * y + y + y;
}

int main() {
    int x;
    int *p = malloc(20 * sizeof(int));
    if (p == NULL) {
        return 1;
    }
    
    b(&x, 10);
    
    p = realloc(p, 30);
    if (p == NULL) {
        free(p);
        return 1;
    }

    p[10] = 10;
    p[-5 + 4] = -5 * (3 + (2 + a()));
    
    free(p);
    return 0;
}
