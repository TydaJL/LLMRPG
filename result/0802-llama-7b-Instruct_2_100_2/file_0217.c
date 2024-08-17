
#include <stdio.h>

int a() {
    return 2;
}

int b() {
    int x;
    return 1;
}

int main() {
    int x = 0;
    x = 1 + 2 + 3;
    printf("%d\n\n%d %d %d\n", x, x + x, a(), x * x);
    b();
    return 0;
}
