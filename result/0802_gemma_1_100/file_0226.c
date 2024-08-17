
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    return 1;
}

void c() {
    printf("Function c called.\n");
}

void d(int num) {
    printf("Function d called with argument: %d\n", num);
}

int main() {
    a();
    b();
    c();
    d(5);
    return 0;
}
