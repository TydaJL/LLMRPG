
#include <stdio.h>

int a() {
    int a;
    printf("%p\n", (void*)&a);
    return 0;
}

void b() {
    int x;
    x = 0;
    printf("%p\n", (void*)&x);
}

void c() {
    int x = 0;
    x += 1;
    printf("%p\n", (void*)&x);
}

int main(int argc, char **argv) {
    int i = 0;
    printf("%d\n", i);
    a();
    b();
    c();
    return 0;
}
