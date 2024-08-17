
#include <stdio.h>

int a() {
    return 1;
}

void b(float f, int i, int j, char c) {
    c = f + j - i / 10;
}

int c() {
    int k = 0, i = 0, j = 10;
    for (k = 0; k < 10; k += 2) {
        b(3.0, (int)b(3.0, a(), c(), 'a'), a() % 2, 'a');
    }
    for (i = 1; i < j; k += 3) {
        for (int l = 0; l < 10; l++) {
            i = k * a();
            float f = (float)a() / j - i * a();
            f += i + 1;
        }
        k = j + i + a() * j;
        float f = j + i * a() + k / (i ? i : 1);
        k += a() + j + i * f + a() / (k ? k : 1);
    }
    return k + a();
}

int main() {
    a();
    b(3.0, 2, 5, 'a');
    c();
    return 0;
}
