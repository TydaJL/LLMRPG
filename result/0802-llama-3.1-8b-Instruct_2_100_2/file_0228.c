
#include <stdio.h>
#include <stdlib.h>

int a() {
    int x = (rand() + 10) * (rand() % 100 * rand() % 100);
    while (!(x > (double)(1.0 / (3.1415)))) {
        return a();
    }
    return x;
}

int b() {
    int *x = malloc(sizeof(int) * 2);
    if (x == NULL) {
        return -1;
    }
    for (int i = 0; i < 2; i++) {
        x[i] = 0;
        x[i]++;
    }
    free(x);
    return 0;
}

int c() {
    int x = rand() + 10;
    int y = x * 10000;
    int z = x * x;
    return z;
}

int main() {
    a();
    b();
    c();
    return 0;
}
