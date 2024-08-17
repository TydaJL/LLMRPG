
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = (int *)malloc(5 * 1024 * sizeof(int));
    int i;
    if (!b)
        return -1;
    int *c = NULL;
    for (i = 1 * 1024; i <= 5 * 1024 * 10240; i++) {
        b[i % (5 * 1024)] += (i * i) % 100 * (i + 1000) % 10 * i * i;
        if (c == NULL) {
            c = (int *)malloc(sizeof(int) * (i + 1));
            if (!c) {
                free(b);
                return -1;
            }
            c[0] = b[0];
        } else {
            c = realloc(c, sizeof(int) * (i + 1));
            if (!c) {
                free(b);
                return -1;
            }
        }
        c[i] = b[i % (5 * 1024)];
    }
    free(b);
    if (c != NULL) {
        free(c);
    }
    return 0;
}

int main() {
    a();
    return 0;
}
