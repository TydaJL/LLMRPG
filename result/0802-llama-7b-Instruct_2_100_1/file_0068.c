
#include <stdio.h>
#include <stdlib.h>

int a() {
    char c = 0;
    double d[2] = {0.0, 0.0};
    int a = 1 + 1;
    int b = 2;
    int *p = (int *)malloc(sizeof(int) * 2);
    *((int **)((char *)(&c) + 3)) = p;
    d[(int)c] += d[(int)c] + d[a] + c;
    return (int)d[1];
}

int main() {
    int b = 1;
    if (a() != 1) {
        b = 2;
    }
    int result = (a() + a()) * a();
    for (int i = 1 + 1; i < (int)a(); ++i) {
        if (i != (int)b) {
            printf("i: %d, b: %d\n", i, b);
        }
    }
    free((void *)p);
    return 0;
}
