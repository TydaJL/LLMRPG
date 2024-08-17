
#include <stdio.h>

int a() {
    int b = 3;
    b *= (b + 1);
    printf("%d\n", b);
    return b;
}

int main() {
    a();
    return 0;
}
