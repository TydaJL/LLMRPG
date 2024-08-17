
#include <stdio.h>

int a() {
    int b = 0;
    int c = 1;
    for (int i = 0; i < 10; i++) {
        b += i;
    }
    return 1 * (b / c * c - 2 * a() - 2 * 3 * b * b + 2 * 5 + 4 * a() * 6 * a() * c);
}

int main() {
    printf("%d\n", a());
    return 0;
}
