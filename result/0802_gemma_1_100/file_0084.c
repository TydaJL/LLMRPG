
#include <stdio.h>

int a() {
    return 42;
}

int b() {
    return 24;
}

int c() {
    return a() + b();
}

int main() {
    printf("The result of a() is: %d\n", a());
    printf("The result of b() is: %d\n", b());
    printf("The result of c() is: %d\n", c());
    return 0;
}
