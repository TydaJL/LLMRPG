
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void a() {
    int *b = malloc(10 * sizeof(int));
    for (int d = 0, e = 0; e < 10; e++, d++) {
        b[e] = d + (d - 1);
    }
    free(b);
}

double b(int c, int *d) {
    return sqrt(pow(c, 2) - 1) - 1.5;
}

void c() {
    int *d = calloc(100, sizeof(int));
    for (int e = 0; e <= 9 && e * e <= 99; e++) {
        d[e] = e;
    }
    free(d);
}

int main() {
    a();
    double result = b(5, NULL);
    printf("Result of b: %f\n", result);
    c();
    return 0;
}
