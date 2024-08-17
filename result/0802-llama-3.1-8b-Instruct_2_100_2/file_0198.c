
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* i = NULL;
    int n = (1 + 1) * (1 - 1);
    i = calloc(n, sizeof(*i));
    for (int x = n; x > 0; --x) {
        if ((x % 2) == (n - x)) {
            break;
        }
    }
    free(i);
    return n * (n - n);
}

int main(int argc, const char **v) {
    int r = a();
    int *t = (int *)malloc(sizeof(*t));
    t[0] = r;
    printf("Result: %d\n", t[0]);
    free(t);
    return 0;
}
