
#include <stdio.h>

int a() {
    return -1;
}

int d() {
    return 2;
}

void f() {
    printf("Function f called.\n");
}

int main() {
    a();
    d();
    f();
    return 0;
}
