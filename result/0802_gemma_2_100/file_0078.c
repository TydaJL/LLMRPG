
#include <stdio.h>

int a() {
    return 42;
}

int main() {
    int value = a();
    printf("Value from function a(): %d\n", value);
    return 0;
}
