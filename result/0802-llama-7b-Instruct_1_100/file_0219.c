
#include <stdio.h>

int i = 3;

int a() {
    return 2;
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    printf("Global variable i: %d\n", i);
    return 0;
}
