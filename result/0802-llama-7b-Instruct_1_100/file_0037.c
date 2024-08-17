
#include <stdio.h>

int a() {
    int v = 2;
    int b = 3, c = 4, d = 5;
    for (int i = 0; i < (b / 2 >> 2 - (0 & 2 << 2 >> 1 + 5 * (1 % 3) % v - 2 * c)); ++i) {
        return a() + ++b * a() << v % c % !d + !d - ++v;
    }
    return 0;
}

int main() {
    a();
    return 0;
}
