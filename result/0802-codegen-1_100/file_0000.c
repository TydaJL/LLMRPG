
#include <stdio.h>

int a() {
    return 5;
}

void foo() {
    printf("Hello, World!\n");
}

int main() {
    int result = a();
    printf("Result from a(): %d\n", result);
    foo();

    return 0;
}
