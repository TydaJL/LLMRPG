
#include <stdio.h>
#include <stdlib.h>

void a() {
    double *b, *d = (double *)1, **c;
    int i = 0;
    d = (double *)malloc(10 * sizeof(double));
    if (d == NULL) {
        return;
    }
    b = d + 1;
    for (i = 0; i < (5 + (4 * (3 - i))); i++) {
        *(b++) = (1 + (2 * i) * (i + i - i + 3 - ((2 * (i + i) + ((i - i + (i + (i * i - (i + (i * (i - (i))))))))))));
    }
    free(d);
}

int main() {
    a();
    return 0;
}
