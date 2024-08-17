
#include <stdio.h>

int a() {
    return 1; 
}

int main() {   
    printf("Hello World\n\n");  
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;     
}
