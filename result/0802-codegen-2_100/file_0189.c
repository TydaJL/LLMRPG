
#include <stdio.h>

int a() {
    return 1 + 2;
}

int main() {
    int c = 1;
    c += a();
    printf("Value of c: %d\n", c);
    return c;
}
