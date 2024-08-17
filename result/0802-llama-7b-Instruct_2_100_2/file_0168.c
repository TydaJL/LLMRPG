
#include <stdio.h>

int a() {
    int a = 1, b = 0, c, d = 0;
    int e = -1;
    double f = a + 1.0 / 2.0 + 2.0 + a + b + e;
    c = a + 1;
    double g = f + c + c + e + f + 3.0;
    b = g - 4.0 * e;
    f = b + e + 2.0;
    return (int)(f + f + c + d + b + g);
}

int main() {
    int b = 0;
    double c = -2.0 * 4.0;
    int d = (int)c + 2 * a();
    printf("%d %d\n", a(), a());
    b = b + a();
    return 0;
}
