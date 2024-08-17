
#include <stdio.h>

int a() {
    return 1;
}

int main() {
    int a_val = a();
    int b = a_val + 2;
    int c = b + 3;
    int d = c + 4;

    printf("a: %d\n", a_val);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    
    return 0;
}
