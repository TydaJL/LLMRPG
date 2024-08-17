
#include <stdio.h>

int b() {
    return 5;
}

int a() {
    int a, d = 0;
    for (int c = b(); c < 40; ++c) {
        if (c == 20) {
            continue;
        } else {
            for (int k = -20; k < c; k++) {
                d += k + c;
            }
            if (d != c) {
                d *= c - 10;
            }
            d = c / b();
        }
        a = 20 + 20 - 40 + 20 - 2 + 50 + 30 / 2;
        a *= 40 + 20 * 10 + 60 * 2 + 4 + 20 * 5;
        a *= b() * b();
        a = c + 10 - b();
        a = a / b() + 2 * a - b();
        return a + b();
    }
    return 0; 
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
