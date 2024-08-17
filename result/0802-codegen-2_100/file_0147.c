
#include <stdio.h>

int a() {
    int x = 2;
    char y;
    y = 'a' + 1;
    return x - y;
}

int main(void) {
    int result = a();
    printf("Result of function a: %d\n", result);
    return 0;
}
