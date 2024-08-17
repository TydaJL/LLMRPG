
#include <stdio.h>
#include <math.h>

int a() {
    int n = 1; 
    return n * n + 1; 
}

int b() {
    return (int)(sqrt(5.0));  
}

int main() { 
    printf("The value of the function is: %d\n", a()); 
    printf("The square root of the number 5 is: %d\n", b());  
    printf("Hello world!!\n");        
    return 0;  
}
