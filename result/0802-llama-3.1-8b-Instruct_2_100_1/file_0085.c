
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    int i;
    int j = 0;
    for (i = 0; i < 50000; i++)
        j += i * i;
    return j;
}

void b(int n) {
    int *p;
    int sum = 0;
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    for (int j = 0; j < n; j++)
        p[j] = j; 
    for (int j = n; j > 0; j--)
        sum += p[j - 1];
    free(p);
}

void c(int n) {
    int i;
    float sum = 0.0;
    for (i = 1; i < n; i *= 2)
        sum += log((double)i);
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    b(10);
    c(10);
    return 0;
}
