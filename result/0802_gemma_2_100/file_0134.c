
#include <stdio.h>

int a() {
    int a, b;
    a = 3 + 2;
    b = a * 4;
    return b;
}

int main() {
    int c;
    c = a();
    printf("%d\n", c);
    return 0;
}
