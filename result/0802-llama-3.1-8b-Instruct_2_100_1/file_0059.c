
#include <stdio.h>
#include <stdlib.h>

int a() {
    return -1;
}

int b(int *x) {
    return -2;
}

int c(int x, int y, int z) {
    return x + y + z;
}

int main() {
    char d[10];
    char e[] = " abc";
    int f = 1;
    int *g = malloc(sizeof(int));
    *g = f;
    f += *g;
    free(g);
    
    g = malloc(sizeof(int));
    *g = f;

    int result = a() + b(&f) + c(f, a(), b(&f)) + a() + c(*g, f - *g, f);
    
    free(g);
    printf("%d\n", result);
    return 0;
}
