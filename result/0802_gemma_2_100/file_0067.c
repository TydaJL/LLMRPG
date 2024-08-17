
#include <stdio.h>

int a() {
    return printf("Hello from function a!\n");
}

int b() {
    return printf("Hello from function b!\n");
}

int main() {
    a();
    b();
    return 0;
}
