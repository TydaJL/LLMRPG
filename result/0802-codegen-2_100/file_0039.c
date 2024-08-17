
#include <stdio.h>
#include <math.h>

#define PI M_PI

int a() {
    return 42;
}

int main(void) {
    printf("hello, world\n");
    printf("Value from function a: %d\n", a());
    return 0;
}
