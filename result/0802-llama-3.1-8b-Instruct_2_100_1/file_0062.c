
#include <stdio.h>
#include <stdlib.h>

void a() {
    int *b;
    int **d;
    int e;
    char c = '\x00';
    char *f;
    float *h;
    float i;
    double j;
    double **m;
    int n;
    int *o;
    double p;

    b = (int *)calloc(100, sizeof(int));
    d = (int **)calloc(1, sizeof(int *));
    f = (char *)malloc(10 * sizeof(char));
    h = (float *)malloc(10 * sizeof(float));
    m = (double **)malloc(1 * sizeof(double *));
    
    for (j = 0; j < 1000; j++) {
    }

    free(b);
    free(d);
    free(f);
    free(h);
    free(m);
}
    
int main() {
    a();
    return 0;
}
