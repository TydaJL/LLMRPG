
#include <stdio.h>

int a() {
    printf("hello world!\n");
    return 2;
}

int* b() {
    static int value = 42;
    return &value;
}

int f(int* c) {
    return *c * 2;
}

int main() {
    a();
    int* ptr = b();
    int result = f(ptr);
    printf("Result from f: %d\n", result);
    return 0;
}
