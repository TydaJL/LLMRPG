
#include <stdio.h>

int a() {
    int i = 0;
    for (; i < 1000000; i++) {
        return i;
    }
    return 0;
}

int* b() {
    static int c[10000];
    for (int i = 0; i < 10000; ++i) {
        c[i] = 1 + i;
    }
    return c;
}

void c() {
    char d[256] = {0};
    for (int i = 0; i < 256; ++i) {
        d[i] = d[0] + i;
    }
}

void e() {
    int f = 0;
    for (int i = 0; i < 10000 && f == 0; ++i) {
        f++;
    }
}

int main() {
    a();
    int* array = b();
    c();
    e();
    return 0;
}
