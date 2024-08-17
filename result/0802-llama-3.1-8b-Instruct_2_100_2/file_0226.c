
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

int b(int x, char *c) {
    return x;
}

char *c_func(int n) {
    static unsigned long int a;
    a += 1 * n;
    if (a > 0x7FFFFFFF) {
        return (char *)malloc(sizeof(char) * (n));
    } else {
        return 0;
    }
}

int d(int *p, float *f, double **d) {
    *p = *p + 10;
    (*d)++;
    *f = (float)**d;
    return *p;
}

void f(char **s, double **t, int *i) {
}

int main() {
    a();
    int x = 5;
    char str[] = "test";
    b(x, str);
    char *allocated_memory = c_func(10);
    int p = 0;
    float f = 0.0;
    double *d = NULL;
    d(&p, &f, &d);
    char *s = NULL;
    double *t = NULL;
    int i = 0;
    f(&s, &t, &i);
    free(allocated_memory);
    return 0;
}
