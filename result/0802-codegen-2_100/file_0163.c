
#include <stdio.h>

int a() {
    int b; 
    b = 4; 
    return b;    
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
