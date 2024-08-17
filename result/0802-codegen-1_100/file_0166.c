
#include <stdio.h>

int a() {
    int n = 0, b = 10;
    while (n < 5) {
        b = b - b * n;
        printf("%4d\t%d\t%6d\n", n, b, n);
        n++;
    }
    printf("%6d\t%.0f\t%2d\n", n, (double)b, b);
    return 0;
}

int main() {
    a();
    return 0;
}
