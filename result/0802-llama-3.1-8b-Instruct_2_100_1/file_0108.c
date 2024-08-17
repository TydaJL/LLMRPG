
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *b = " abc";
    return 0;
}

char* c(int x, char* y, int* d) {
    int e[100];
    int f[10];
    int *g;

    for (x = 0; x < 100; x++) {
        e[x] = x;
        f[(x % 10)] = x;
        if (x > 0) {
            g = (int *)(malloc(sizeof(int) * x));
            free(g);
        }
    }
    return y;
}

int main() {
    a();
    char *str = "example";
    int num = 0;
    c(0, str, &num);
    return 0;
}
