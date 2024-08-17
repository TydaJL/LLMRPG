
#include <stdio.h>

int a() {
    return 5;
}

void f() {
    int x = 10;
    printf("Value of x: %d\n", x);
}

struct T {
    int value;
};

static struct T t;

void g() {
    printf("Function g called.\n");
}

int main() {
    printf("Function a returned: %d\n", a());
    f();
    g();
    return 0;
}
