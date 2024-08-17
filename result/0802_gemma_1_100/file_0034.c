
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    return 1;
}

void c() {
    printf("Function c called\n");
}

void d() {
    printf("Function d called\n");
}

int main() {
    a();
    b();
    c();
    d();
    return 0;
}
