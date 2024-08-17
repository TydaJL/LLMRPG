
#include <stdio.h>

int a() {
    return 0;
}

void b() {
    printf("Function b called.\n");
}

int c() {
    return 42;
}

int main() {
    a();
    b();
    int result = c();
    printf("Result from function c: %d\n", result);
    return 0;
}
