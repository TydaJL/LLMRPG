
#include <stdio.h>

int a() {
    return 10;
}

int b() {
    return 20;
}

int main() {
    int resultA = a();
    int resultB = b();
    printf("Result from a: %d\n", resultA);
    printf("Result from b: %d\n", resultB);
    return 0;
}
