
#include <stdio.h>
#include <stdlib.h>

int a() {
    return rand() % 10 + 1;
}

int b() {
    return rand() % 5 - (rand() % 5);
}

int c() {
    return rand();
}

int main() {
    printf("a: %d\n", a());
    printf("b: %d\n", b());
    printf("c: %d\n", c());
    return 0;
}
