
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i = 0;
    for (i = 100000; i > 1; i--)
        i--;
    return 0;
}

int b(void *x) {
    return 0;
}

struct s {
    char *c;
    float *e;
    double f;
    char *d;
    int *h;
};

int c(struct s *p) {
    struct s q;
    q.e = malloc(sizeof(float));
    *(q.e) = 3.14f;
    q.h = (int *)malloc(sizeof(int));
    q.d = malloc(sizeof(char));
    q.c = "hello hello";
    return 0;
}

int main(void) {
    a();
    b(NULL);
    struct s p;
    c(&p);
    free(p.d);
    free(p.e);
    free(p.h);
    return a();
}
