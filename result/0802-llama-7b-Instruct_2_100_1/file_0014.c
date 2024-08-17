
#include <stdio.h>

int a() {
    return 3;
}

int main() {
    int x = 5;
    int y = 2;
    int c = (x * y);
    int d = 10 * c * x * (y * c * y * c * y * y * y * c * y + x * x);
    long long g = 1LL * 3 * x * 2 * d * c * y * c * d * y * x * d * c * c * x * y;
    int b = y + c * x + d * (g * y + y) + c * x * x + c + c * d + x * x;
    int z = d * c * c * x * d + c + c + x * b * y * x * b * d * c;

    printf("a() = %d\n", a());
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("g = %lld\n", g);
    printf("b = %d\n", b);
    printf("z = %d\n", z);

    return 0;
}
