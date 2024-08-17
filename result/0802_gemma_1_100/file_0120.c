
#include <stdio.h>

int a() {
    return 42;
}

void displayMessage() {
    printf("Hello, World!\n");
}

int main() {
    int result = a();
    printf("Result from a(): %d\n", result);
    displayMessage();
    return 0;
}
