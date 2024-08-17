
#include <stdio.h>
#include <stdlib.h>

int a() {
    double sum = 0.0000;
    int i;
    for (i = 1; i <= (1000 * 1000 * 10000); ++i)
        sum += (double)(i) / (double)(i + 2);
    sum /= 2.0;

    struct {
        double a, b, c, d;
    } *temp = malloc(sizeof(struct { double a, b, c, d; }));
    free(temp);

    struct {
        int i, *p, j, *k, m, n;
    } *t = malloc(sizeof(*t));
    t->i = 1 + (int)malloc(1000 * sizeof(char));
    free(t);

    return 0;
}

int main() {
    a();
    return 0;
}
