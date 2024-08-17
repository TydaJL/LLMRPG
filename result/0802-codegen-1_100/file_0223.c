
#include <stdio.h>

int a() {
    return 0;
}

void c(int n, const char *x) {
    printf("Value of n: %d, String: %s\n", n, x);
}

void b() {
    printf("Function b called\n");
}

int main() {
    a();
    b();
    c(10, "Hello");
    return 0;
}
