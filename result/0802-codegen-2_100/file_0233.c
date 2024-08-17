
#include <stdio.h>

int a() {
    int x;
    x = 5 + 3 * 8;
    return x + 10;
}

int b() {
    return a();
}

int main(void) {
    printf("The value is: %d\n", b());
    return 0;
}
