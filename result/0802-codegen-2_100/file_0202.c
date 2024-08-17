
#include <stdio.h>

int a() {
    return 1;
}

void f(void) {
    printf("Function f called.\n");
}

int main(void) {
    printf("Value from function a: %d\n", a());
    f();
    return 0;
}
