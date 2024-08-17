
#include <stdio.h>

int add() {
    return 5 + 3;
}

void printMessage() {
    printf("Hello, World!\n");
}

int main() {
    int sum = add();
    printf("Sum: %d\n", sum);
    printMessage();
    return 0;
}
