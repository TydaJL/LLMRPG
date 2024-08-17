
#include <stdio.h>

int a() {
    return 1; 
}

int main() {
    int i;  
    float x = 3.14159;   
    
    printf("x is %f\n", x);    
    
    i = a();    
    printf("i is: %i\n", i);   
    
    return 0;     
}
