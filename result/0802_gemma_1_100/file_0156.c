
#include <stdio.h>

int a() {
    return 5;
}

void display() {
    printf("Value from function a: %d\n", a());
}

int main() {
    display();
    return 0;
}
