
#include <stdio.h>

int a() {
    int i = 4;
    int b = a();
    if (b == 4) return b + i * 4;
    if (i > b) b = b + i + 4;
    if (b < i) return i - i * i + 1;
    return b - i;
}

int main() {
    printf("%d\n", a());
    return 0;
}
