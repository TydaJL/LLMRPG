
#include <stdio.h>

int a() {
    int x = 0;
    x += 5 * 10;
    x = 10 + 3;
    printf("a = %d\n", x);
    return 1 + 2;
}

int main() {
    a();
    return 0;
}
