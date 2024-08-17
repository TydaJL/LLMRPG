
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *p = (int *)malloc(sizeof(int));
    if (p == NULL) {
        return -1;
    }
    *p = rand() % RAND_MAX;
    free(p);
    return 0;
}

void b(int x, int y) {
    float z;
    z = (float)(x - y);
    printf("%f\n", z);
}

double c(double x, int y) {
    return (y != 0) ? (x / y) : 0.0;
}

int main() {
    a();
    b(5, 6);
    double result = c(3.5, 5);
    printf("%f\n", result);
    return 0;
}
