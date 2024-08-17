
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int *x = (int *)malloc(100 * sizeof(int));
    if (x == NULL) {
        exit(1);
    }
    return x[0];
}

float c() {
    float *y = (float *)malloc(sizeof(float));
    if (y == NULL) {
        exit(1);
    }
    float d = *y;
    free(y);
    return d;
}

int b(char *str) {
    int len = strlen(str);
    int SKIP = len + 1;
    int **p = (int **)malloc(SKIP * sizeof(int *));
    if (p == NULL) {
        exit(1);
    }
    p[SKIP - 1] = (int *)malloc(sizeof(int));
    if (p[SKIP - 1] == NULL) {
        free(p);
        exit(1);
    }
    char **q = (char **)malloc(2 * sizeof(char *));
    if (q == NULL) {
        free(p[SKIP - 1]);
        free(p);
        exit(1);
    }
    p[0] = (int *)malloc(len * sizeof(int));
    if (p[0] == NULL) {
        free(q);
        free(p[SKIP - 1]);
        free(p);
        exit(1);
    }
    p[0][len - 1] = 1;
    free(q);
    free(p[SKIP - 1]);
    free(p[0]);
    free(p);
    return 0;
}

int main() {
    a();
    c();
    b("test");
    return 0;
}
