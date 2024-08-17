
#include <stdio.h>

int a() {
    return 4;
}

void c() {
    a();
}

void b() {
    c();
}

int main() {
    b();
    printf("hello\n");
    return 5;
}
