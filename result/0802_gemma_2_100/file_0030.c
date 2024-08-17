
#include <stdio.h>

int a() {
    return 12;
}

int b() {
    return 5;
}

int c() {
    return 3;
}

int main() {
    int x = a();
    int y = b();
    int z = c();
    printf("a() = %d\n", x);
    printf("b() = %d\n", y);
    printf("c() = %d\n", z);
    return 0;
}
