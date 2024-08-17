
#include <stdio.h>
#include <stdlib.h>

void a() {
    int *b;
    int i, j;
    int c[10000] = {1};
    b = calloc(1, sizeof(int));
    if (b == NULL) {
        exit(1);
    }
    for (i = 0; i < 10000; i++) {
        for (j = 1; j <= 200; j++) {
            c[i] *= j;
        }
    }
    int *d = malloc(8);
    if (d == NULL) {
        exit(2);
    }
    int e[5] = {1};
    for (i = 0; i < 5; i++) {
        if (e[i] <= 100000) {
            // Do something with e[i]
        }
    }
    free(b);
    free(d);
}

int main() {
    a();
    return 0;
}
