
#include <stdio.h>

int a() {
    int b = 0;
    return b;
}

int main() {
    int x = a();  
    int y = 0;

    y = y + 1;
    x = x + 2;

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);

    return 0;
}
