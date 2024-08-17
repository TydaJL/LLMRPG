
#include <stdio.h>

int a() {
    return 10 * 10 - 2 - 100 / 2;
}

void printHello() {
    printf("hello, world\n");
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    printHello();
    return 0;
}
