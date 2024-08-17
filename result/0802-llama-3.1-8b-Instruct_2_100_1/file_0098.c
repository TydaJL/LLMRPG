
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *b = malloc(102400);
    if (b == NULL) return -1;
    int *c;
    int x;
    float d = 1.0;
    double e = 5.6;

    for (x = 0; x < 2000; x++) {
        d *= e;
        c = malloc(sizeof(int));
        if (c == NULL) {
            free(b);
            return -1;
        }
        c[0] = (int)(x * d + x);
        free(c);
    }

    free(b);
    return 1;
}

int b() {
    char *h = (char *)malloc(1024);
    if (h == NULL) return -1;
    int *i = (int *)malloc(sizeof(int));
    if (i == NULL) {
        free(h);
        return -1;
    }
    int l;

    for (l = 0; l < 10; l++) {
        // Placeholder operation for loop
    }

    free(h);
    free(i);
    return 0;
}

int main() {
    if (a() == -1) {
        fprintf(stderr, "Error in function a\n");
        return -1;
    }
    if (b() == -1) {
        fprintf(stderr, "Error in function b\n");
        return -1;
    }
    return 0;
}
