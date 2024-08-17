
#include <stdio.h>
#include <stdlib.h>

int b(int *x, int *y, int *c) {
    *c += *x - 2;
    return *c;
}

int c(int *p, int *q, char *s) {
    int d = 0;
    b(p, q, &d);
    *s = 'a' + d;
    return d;
}

int main() {
    int i = 0;
    char *m = malloc(20);
    if (m == NULL) {
        return 1;
    }
    int *n = &i;
    int *o = &i;

    while (i < 10) {
        char *temp = realloc(m, (i + 1) * 20);
        if (temp == NULL) {
            free(m);
            return 1;
        }
        m = temp;
        c(n, o, m);
        for (; i < 10; i++) {
            printf("%s\n", m + 20 * i);
        }
    }
    free(m);
    return 0;
}
