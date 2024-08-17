
#include <stdio.h>
#include <stdlib.h>

int a() {
    int b = rand();
    return b + 2;
}

double c() {
    double b = (double)(rand());
    return b * b;
}

void d(int b) {
    for (;;) {
        int c = b * b + rand();
        b++;
    }
}

int main() {
    srand(42);
    double b[10];
    for (int i = 0; i < 10; ++i) {
        b[i] = a() + c();
    }
    int c_val = (int)b[0];
    d(c_val);

    int e = sizeof(b);
    int f[e / sizeof(int)];
    return 0;
}
