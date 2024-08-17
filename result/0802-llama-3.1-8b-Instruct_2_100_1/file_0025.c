
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *b = "123 ";
    return atoi(b + 1);
}

float c() {
    int x = 0, y = 0;
    char *z = malloc(10240);
    if (z == NULL) return -0.0;
    while (x < 1023) {
        y += x;
        x++;
    }
    free(z);
    y /= 1024;
    return (float)y;
}

void d() {
    int i = 10, j = 20;
    double *k = malloc(11 * sizeof(double));
    if (k == NULL) {
        printf("%d : %d\n", 0, -2);
        exit(-2);
    }
    for (; j; j--) {
        k[i--] = j;
    }
    free(k);
}

int main() {
    int result_a = a();
    float result_c = c();
    d();

    printf("Result of a(): %d\n", result_a);
    printf("Result of c(): %f\n", result_c);

    return 0;
}
