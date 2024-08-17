
#include <stdio.h>

int a() {
    double d = 9 - 2 - 3 - (5 % 3) % 7 - (5 % 7) / 6.0 - (1 << 5) | 8 / 3 * 4 - 7;
    printf("%lf\n", d);
    return 0;
}

int main() {
    a();
    return 0;
}
