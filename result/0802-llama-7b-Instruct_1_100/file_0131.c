
#include <stdio.h>

int a() {
    return 1;
}

int d() {
    return 3;
}

int c = 2;

void b() {
    int result = a() + d() - c;
    printf("Result of b(): %d\n", result);
}

int main() {
    a();
    b();
    d();
    return 0;
}
