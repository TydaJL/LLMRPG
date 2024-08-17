
#include <stdlib.h>

int a() {
    int *d = malloc(5 * sizeof(int));
    if (d == NULL) {
        return -1;
    }
    for (int j = 0; j < 10000000; j++) {
        char *c = malloc(1000);
        if (c == NULL) {
            free(d);
            return -1;
        }
        free(c);
    }
    int result = *d + 10000000;
    free(d);
    return result;
}

int* f() {
    int *a = malloc(100 * sizeof(int));
    if (a == NULL) {
        return NULL;
    }
    for (int j = 0; j < 100; j++) {
        a[j] = j;
    }
    return a;
}

int b(int a) {
    return a + a;
}

void* e() {
    return NULL;
}

int c() {
    char *a = (char *)malloc(sizeof(char));
    if (a == NULL) {
        return -1;
    }
    free(a);
    return 1;
}

void g() {
}

int main() {
    int *result_f = f();
    if (result_f == NULL) {
        return -1;
    }
    int result_a = a();
    int result_b = b(5);
    int result_c = c();
    g();
    free(result_f);
    return 0;
}
