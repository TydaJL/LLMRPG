
#include <stdio.h>

int a() {
    int x = 10;
    return x;
}

int main() {
    int x = a();
    printf("Value of x: %d\n", x);
    return 0;
}
