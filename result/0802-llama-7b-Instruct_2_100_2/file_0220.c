
#include <stdio.h>

int c(void) {
    int x = 2;
    int y = -3;
    return (x < y) && (x > y + 1) || ((x + y) == 2);
}

int b(void) {
    return 0;
}

int a(void) {
    return 10 + b() + c();
}

int main(void) {
    int i = -a();
    printf("\n");
    printf("Hello %s\n", "World");
    printf("I have %d number of variables to print out. %d %d %d\n\n%d, %d\n", 5, 4, 9, 7, 3, 2);
    return 0;
}
