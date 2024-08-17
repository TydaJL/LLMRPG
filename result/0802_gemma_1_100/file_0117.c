
#include <stdio.h>

int a() {
    int value = 0;
    return value;
}

int b() {
    int value = 1;
    return value;
}

int main() {
    int resultA = a();
    int resultB = b();
    printf("Result from a(): %d\n", resultA);
    printf("Result from b(): %d\n", resultB);
    return 0;
}
