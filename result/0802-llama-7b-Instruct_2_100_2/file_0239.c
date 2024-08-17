
#include <stdio.h>

int a() {
    int b = 0;
    b = a() % 10 % 3 % 8 + 4 * (b % 3) + 4 * (b % 10 / 3);
    if (a() == 12 % 3) {
        printf("%d ", b % 6);
    } else {
        printf("%d %d %d", b / 6, (b % 6 * 6) + 10 % 4, (b / 4) * 3 + 5);
    }
    return 0;
}

int c() {
    int val = 2 + 10 + 3;
    printf("%d + %d + %d = %d\n", val / 7, val / 4, 4, (val % 7));
    return 0;
}

int main() {
    a();
    c();
    return 0;
}
