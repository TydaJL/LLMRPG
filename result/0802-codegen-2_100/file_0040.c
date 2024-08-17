
#include <stdio.h>

int a() {
    int value = 3;
    return value;
}

int main() {
    int result = a();
    printf("The value returned from function a is: %d\n", result);
    return 0;
}
