
#include <stdio.h>

int b() {
    return 5; 
}

int d() {
    return 10; 
}

int a() {
    return b() + 1;
}

void f() {
    printf("Function f called.\n");
}

int c() {
    return d();
}

void e() {
    printf("Function e called.\n");
}

int main() {
    printf("a() = %d\n", a());
    f();
    printf("c() = %d\n", c());
    e();
    return 0;
}
