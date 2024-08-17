
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

void printHello() {
    printf("Hello, World!\n");
}

int subtract(int a, int b) {
    return a - b;
}

void execute() {
    printHello();
    int sum = add(5, 10);
    int difference = subtract(10, 5);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
}

int main() {
    execute();
    return 0;
}
