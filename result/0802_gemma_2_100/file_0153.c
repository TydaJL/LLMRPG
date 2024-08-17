
#include <stdio.h>

int a() {
    return 5;
}

void b() {
    printf("Function b called\n");
}

void c() {
    printf("Function c called\n");
}

int main() {
    printf("Value from function a: %d\n", a());
    b();
    c();
    return 0;
}
