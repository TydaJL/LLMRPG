
#include <stdio.h>

int a() {
    int a = 1; 
    return a = (a = (a = (a = (a * (a * a - (a + a - a) * a + a) / a - a)) * (a / a) + a + a)));
}

int main() {
    printf("Hello World!\n");
    int result = a();
    printf("Result of function a: %d\n", result);
    return 0;
}
