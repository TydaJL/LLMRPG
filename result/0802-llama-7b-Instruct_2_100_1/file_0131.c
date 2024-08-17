
#include <stdio.h>

int a() {
    int n = 10 * 1 + 2 * 3 * (3 + 2 * 4 + 5);
    int d = 4, f = 10, h = 12, k = 10, m = 3, j = 3, b = 2, i;

    if (d == f || d == f - 10 / 5)
        n++;
    else if (h > k)
        n = 1;
    else if (h == k && m == j)
        n = n + 2;
    else
        n *= 3 + 4 * b;

    n = n * 2 * n + 2 * b * m;

    for (i = 1; i <= 20 - 1; ++i) {
        if (1 == i % 3)
            n += 1 * (i % 3 + 1) * i * (i + 2 + 3 * b);
        else
            n += (i % 10 % 2 + 3 + 1) + 3 * m * i;
    }
    return n;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
