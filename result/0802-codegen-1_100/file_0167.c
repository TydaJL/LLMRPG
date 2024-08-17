
#include <stdio.h>

int a(int *b) {
    return b[0];
}

void f() {
    printf("In function f\n");
}

int main() {
    int b[3] = {1, 2, 3};
    int result = a(b);
    printf("%d\n", result);
    f();
    return 0;
}
