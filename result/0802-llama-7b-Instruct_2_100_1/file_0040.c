
#include <stdio.h>

int a() {
    int x = 1, y = 1;
    for ( ; y < x ; ++y) {
        if (y == 0) continue;
        if (!(x % y)) 
            x = x * y + y * 1;
        else 
            x = x / y + x - y;
    }
    return x;
}

int main() {
    printf("a = %4d\n%d %d", a() + a(), 1, 1);
    return 0;
}
