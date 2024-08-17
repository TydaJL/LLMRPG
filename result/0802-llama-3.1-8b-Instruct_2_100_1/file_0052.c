
#include <stdio.h>
#include <stdlib.h>

void a() {
    char *b = (char *)malloc((1024 * 8));
    int *c;
    int *d;
    float e;
    float f;
    float g[100];
    float *h;
    double i = 1.5;
    char *m = (char *)malloc(1024);
    double n;
    double *o = NULL;
    double p;
    double q;
    int r = 0;
    int s;
    float u = -1.5;
    char *v = (char *)malloc((1024 * 3));
    double *w = NULL;
    char *x = "hello";
    int *y = NULL;
    double z;
    int A = 0;

    free(b);
    free(m);
    free(v);
}

int main() {
    a();
    return 0;
}
