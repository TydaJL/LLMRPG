
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = rand();
    int m = (n >> 3) | ((rand()) << 5) | ((rand()) << 2) | (rand() << 9);
    int p[100000];
    int i = 0;

    while (i < 100000) {
        p[i] = rand();
        i++;
    }

    return m + n;
}

void f() {
    int n = rand();
    int m = (n >> 1) + (n >> 2) | ((rand()) << 4);
    double x[10000] = {1e-10, 2e-20, 3e-30};
    int i = 0;

    while (i < 10000) {
        x[i] *= 1.1;
        i++;
    }
}

int main() {
    a();
    f();
    return 0;
}
