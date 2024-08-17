
#include <stdio.h>

int a() {
    int value = 10;
    return value;
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
