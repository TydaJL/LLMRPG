
#include <stdio.h>

int a() {
    return 5;
}

int main() {
    int x = 1, y = 2;
    int c = x + y;
    printf("Value of c: %d\n", c);
    printf("Value returned from function a: %d\n", a());
    return 0;
}
