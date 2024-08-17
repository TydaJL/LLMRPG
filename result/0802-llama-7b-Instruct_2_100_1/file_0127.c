
#include <stdio.h>

int a() {
    return 0;
}

int c() {
    int x = 2;
    if (x % 3 == 2) {
        if (x > 4) {
            if (x + 4 < 10) {
                x -= 2;
            }
        }
    }
    return x;
}

float f(float f) {
    return f * 2.0f;
}

int g(float g) {
    return 2;
}

int e() {
    return 4;
}

int k() {
    return 5;
}

int m() {
    return 0;
}

int o() {
    return m() + 2;
}

void p(int i, int j) {
}

int l() {
    int a[3] = {0};
    return 0;
}

int main() {
    printf("a: %d\n", a());
    printf("c: %d\n", c());
    printf("f(5.0): %.2f\n", f(5.0f));
    printf("g(1.0): %d\n", g(1.0f));
    printf("e: %d\n", e());
    printf("k: %d\n", k());
    printf("o: %d\n", o());
    l();
    return 0;
}
