
#include <stdio.h>

int a() {
    return 0;
}

void b() {
    printf("Function b called.\n");
}

void c() {
    printf("Function c called.\n");
}

int main() {
    a();
    b();
    c();
    return 0;
}
