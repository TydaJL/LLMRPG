
#include <stdio.h>

int a() {
    int c = 0, x = 1, z = 1, i = 1, r = 5;
    if (i > 4) return c;
    int d = a() + a();
    int e = 1; 
    e = e + e + e - e * e - e + e;
    if (x == z) z = 0;
    while (x != 0) x--;
    for (; i < 4; i += 1) c += i;
    for (i = 10; i > 0 && c < 5; i--) c += a() * r + a();
    for (i = 0; i < 3; i++, c--) x -= a();
    return c;
}

int b() {
    int b = 0, c = 10 + a(), d = a();
    for (; b < d && b != a(); ++d) b *= b + b;
    while (a() != c) b += a();
    return b;
}

int main() {
    a();
    b();
    return 0;
}
