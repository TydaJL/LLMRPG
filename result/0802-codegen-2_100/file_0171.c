
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i = 0, j = 1, k, m = 0;

    for (j = 2; j < 10; j++) {
        k = j * j;
        m += j;
    }
    return m;
}

int main(int argc, char *argv[]) {
    int c;
    int *d;
    d = (int *) malloc(sizeof(int));
    if (d == NULL) {
        return 1;
    }
    *d = 5;

    c = argc + 1;

    free(d);
    return c;
}
