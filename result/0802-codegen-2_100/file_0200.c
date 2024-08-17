
#include <stdio.h>

int a() {
    return -1;
}

void b(double bs[], int size) {}

void c(int *r) {}

void d(float *e) {
    for (int i = 0; i < 100; i++) {
        *e += i + 2.5;
        c((int *)e);
    }
}

int main() {
    float e = 0.0;
    d(&e);
    a();
    return 0;
}
