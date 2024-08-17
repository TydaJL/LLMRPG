
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int d() {
    return 3;
}

int c() {
    return (b() - d() + a()) / 3;
}

int main() {
    a();
    b();
    d();
    printf("%d\n", c());
    return 0;
}
