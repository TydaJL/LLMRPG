
#include <stdio.h>

int a() {
    int x;
    x = 5;
    return x;
}

void b() {
    printf("Function b called\n");
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    b();
    return 0;
}
