
#include <stdio.h>

int a() {
    int result = 5; 
    return result; 
}

int main() {
    int value = a();
    printf("Value from function a: %d\n", value);
    return 0;
}
