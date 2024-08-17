
#include <stdio.h>
#include <stdlib.h>

int a() {
    double b;
    float *c = malloc(4 * sizeof(float));
    if (c == NULL) {
        return -1;
    }
    for (int i = 0; i < 4; i++) {
        c[i] = (float)(rand() % 100000);
    }
    b = 0.0;
    int *d = (int *)(c + 5);
    while (*d < 100000) {
        *(d++) = (int)(b + *(d - 1));
        b += *(d - 1);
    }
    free(c);
    return 0;
}

int main() {
    a();
    return 0;
}
