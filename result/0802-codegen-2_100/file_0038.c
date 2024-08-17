
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    int b = 10;
    int* p = &b;
    return *p;
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
