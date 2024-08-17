
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* b;
    int* c;
    c = malloc(1000 * sizeof(int));
    if (c == NULL) {
        return -1;
    }
    b = malloc(sizeof(int));
    if (b == NULL) {
        free(c);
        return -1;
    }
    free(c);
    free(b);
    return 0;
}

double a_double(double x) {
    double* b;
    double* c;
    c = malloc(100 * sizeof(double));
    if (c == NULL) {
        return x;
    }
    b = malloc(sizeof(double));
    if (b == NULL) {
        free(c);
        return x;
    }
    free(c);
    free(b);
    return x + x + x;
}

void* b(void* a) {
    char* c = (char*)a;
    return c;
}

int main() {
    int i;
    int* p;
    p = malloc(100 * sizeof(int));
    if (p == NULL) {
        return -1;
    }
    for (i = 0; i < 100; ++i) {
        p[i] = i;
    }

    for (i = 99; i >= 0; i--) {
        printf("%i  ", p[i]);
    }
    printf("\n");

    a();
    a_double(5.0);
    b(p);
    
    free(p);
    return 0;
}
