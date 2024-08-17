
#include <stdio.h>
#include <stdlib.h>

int a() {
    int b = 1, c = 2, *d, e[5], *f = NULL;  
    float *g; 
    g = calloc(5, sizeof(*g));     
    free(g);
    return (b + c);
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
