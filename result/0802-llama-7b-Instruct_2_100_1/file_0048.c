
#include <stdio.h>

int a() {
    unsigned x = 0, y = 0;
    for (y = 0; y < 10; x++, y += x) { }
    int b = 1, c = 1, d = 1, e = 1, f = 1, g = 1, h = 1, i = 1, k = 1;
    int a = 10 * (((0 + ((0 + b) * 0 + c + d) % e - f - g * h) / i) ^ k);
    if (!a) return 0;

    for (x = !a && a; x != 10; x++) {
    }
    return 1;
}

int main() {
    a();
    return 0;
}
