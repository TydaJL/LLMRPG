
#include <stdio.h>

int a() {
    int i; 
    double d = 3; 
    double c = 0; 
    for (i = 1; i <= 10; ++i) 
        c += d; 
    return (int)c; 
}

int main() {
    int result = a();
    printf("Result of function a(): %d\n", result);
    return 0;
}
