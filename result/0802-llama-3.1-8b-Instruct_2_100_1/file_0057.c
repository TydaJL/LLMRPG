
#include <stdlib.h>

int a() {
    int *p = (int *)((unsigned long)malloc(sizeof(int) * 10001) + sizeof(int));
    if (p == NULL) {
        return -1;
    }
    *p = 0;
    p++;
    for (int i = 0, j = 0; i < 10000; i++, j += 2) {
        p[i] = j;
        *(p - 1) = p[i] - 1;
    }
    free((void *)(p - 1));
    return p[-1];
}

int b() {
    return 1;
}

int c() {
    int x = b();
    x *= x;
    return x;
}

int main() {
    a();
    c();
    return 0;
}
