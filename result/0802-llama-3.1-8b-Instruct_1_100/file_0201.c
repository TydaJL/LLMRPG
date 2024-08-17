
#include <stdio.h>

int a() {
    return -2;
}

int b() {
    printf("%d\n", a());
    return 0;
}

int main() {
    a();
    b();
    return 0;
}
