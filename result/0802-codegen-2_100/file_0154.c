
#include <stdio.h>

int a() {
    printf("hello world!\n");
    return 5;
}

int main() {
    int x, y;
    printf("Enter the values of x and y\n");
    printf("Enter x: ");
    x = getchar();
    getchar(); // To consume the newline character
    printf("\nEnter y: ");
    y = getchar();
    printf("\nThe result is %d\n", a());

    return 0;
}
