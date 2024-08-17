
#include <stdio.h>

int a() {
    int x = 42;
    return (x - 3) * (x - 3) + 1;
}

int b() {
    int x = 42;
    return (x - 2) + 2;
}

int main() {
    printf("%s\n", "Hello");
    printf("Result of a: %d\n", a());
    printf("Result of b: %d\n", b());
    return 0;
}
