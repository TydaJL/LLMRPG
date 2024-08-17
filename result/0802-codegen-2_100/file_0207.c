
#include <stdio.h>
#include <stdlib.h>

void* call_oc(size_t num, size_t size) {
    return calloc(num, size);
}

void a() {
    char *str = calloc(5, sizeof(char));
    int *nums;
    double *a = call_oc(2, sizeof(double));
    float *b = call_oc(5, sizeof(float));
    int *c = call_oc(3, sizeof(int));
    int *d = call_oc(4, sizeof(int));
    char *e = call_oc(3, sizeof(char));
    char *f = call_oc(1, sizeof(char));
    char *g = call_oc(2, sizeof(char));

    free(str);
    free(a);
    free(b);
    free(c);
    free(d);
    free(e);
    free(f);
    free(g);
}

int main() {
    a();
    return 0;
}
