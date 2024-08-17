
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

int b() {
    return 1 + a();
}

int* c(int* n) {
    static int x = 0;
    *n = x;
    x++;
    if (x == 1000000) {
        x = x % 10000;
    }
    return n;
}

int d(int** n) {
    int* m = (int*)malloc(sizeof(int));
    if (m == NULL) {
        return -1;
    } else {
        m[0] = **n;
        return 0;
    }
}

int main() {
    int* p = (int*)malloc(sizeof(int));
    if (p == NULL) {
        return -1;
    }
    p = c(p);

    while (1) {
        p = c(p);
        printf("%d\n", *p);
        if (*p >= 10000) {
            break;
        }
    }

    free(p);
    return 0;
}
