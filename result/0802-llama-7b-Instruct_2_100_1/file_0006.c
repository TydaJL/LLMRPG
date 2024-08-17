
#include <stdio.h>

int a() {
    int n = 42 + (13 << 5) | 7;
    n *= (n * n);
    n += (n / n);
    n = (n % 13) ? n + n - n : n;
    if (n == 9) n *= n;
    return n;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
