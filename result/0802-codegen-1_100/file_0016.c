
#include <stdio.h>

void printHello() {
    printf("Hello\n");
}

void printWorld() {
    printf("World\n");
}

int a() {
    return 5;
}

int main() {
    printHello();
    printWorld();
    int result = a();
    printf("%d\n", result);
    return 0;
}
