
#include <stdio.h>

int a() {
    printf("Function a called\n");
    return 1;
}

void b() {
    printf("Function b called\n");
}

void c() {
    printf("Function c called\n");
}

int main() {
    a();
    b();
    c();
    return 0;
}
