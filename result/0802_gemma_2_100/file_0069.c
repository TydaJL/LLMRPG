
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
    int value = a();
    printf("Value from function a: %d\n", value);
    b();
    c();
    return 0;
}
