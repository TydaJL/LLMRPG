
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double a() {
    double d = (double)rand();
    float f = 1.2f;
    long long l = -1 * 123456789LL;
    short sh = 1;
    return d + f + l + (short)((long)sh);
}

void b() {
    int *p = malloc(sizeof(int));
    if (p != NULL) {
        *p = -1;
        free(p);
    }
}

int main() {
    srand(time(NULL));
    double result = a();
    printf("Result from function a: %f\n", result);
    for (int i = 0; i < 1000000; i++) {
        b();
    }
    return 0;
}
