
#include <stdio.h>

int a() {
    printf("a() is called.");
    return 3;
}

int b(int a) {
    return a * a;
}

int main() {
    int c;
    c = a();
    printf("\nc = %d", c);
    printf("\nb(3) = %d\n", b(3));
    return 0;
}
