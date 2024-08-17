
#include <stdio.h>

int a() {
    long long x = 2;
    return (x * 2 / 2 == x * 1 / 4 / 1) ? (x * x / 4 + x / 4 + 4) : (0);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
