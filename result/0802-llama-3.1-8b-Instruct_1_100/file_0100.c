
#include <stdio.h>

void b() {
    printf("Function b called\n");
}

void c() {
    printf("Function c called\n");
}

int a() {
    b();
    c();
    return 0;
}

int main() {
    a();
    return 0;
}
