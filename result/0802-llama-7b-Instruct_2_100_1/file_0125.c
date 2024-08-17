
#include <stdio.h>

int a() {
    return 1 + 3;
}

int b = 1 + a();

int main() {
    int c = a() * b + a();
    int d = c + b + a();
    int e = d * a();

    printf("%d + %d + %d = %d * %d = %d / %d = %d + %d = %d\n", b, e, a() * e, a() * b, c, e, d, c, a(), b * a(), d, c + d + e);
    
    return 0;
}
