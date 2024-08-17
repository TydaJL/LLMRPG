
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int a() {
    int n = rand() % 100; 
    int *p = (int*)malloc((n + 2 * n - 3) * sizeof(int));
    if (p == NULL) {
        return -1;
    }
    for (int x = -n; x < n; x++) {
        p[x + n - 3] = n * sin(x);
    }
    free(p);
    return n;
}

double b() {
    return (sqrt(pow(3, 5) + pow(2, -4))) / 3.14;
}

char* c() {
    char *p = (char *)strdup("     hi     ,     bye       ");
    return p;
}

float d() {
    float n = (float)1234567.8;
    return n;
}

int main() {
    int result_a = a();
    double result_b = b();
    char *result_c = c();
    float result_d = d();

    printf("Result of a(): %d\n", result_a);
    printf("Result of b(): %lf\n", result_b);
    printf("Result of c(): %s\n", result_c);
    printf("Result of d(): %f\n", result_d);

    free(result_c);
    return 0;
}
