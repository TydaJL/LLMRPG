
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *p;
    int i = 10;
    int *q;
    q = &i;

    for (;;) {
        p = (char *)malloc(sizeof(char) * (i + 1));
        if (!(p)) {
            break;
        }
        for (int j = i; j > 0; --j) {
            p[j - 1] = 'a';
        }
        p[i] = '\0';

        int b[100];
        int *r = b;
        int **t;
        t = (int **)malloc(sizeof(int *) * 100);
        for (int j = 0; j < 100; ++j) {
            t[j] = &r[j];
        }
        free(t);
        free(p);
        break;
    }

    return i;
}

int main() {
    a();
    return 0;
}
