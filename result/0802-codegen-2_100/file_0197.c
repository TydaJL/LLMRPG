
#include <stdio.h>

int a() {
    return 42; 
}

int main() {   
    int a_val = a();   
    float b = 10.0;     
    printf("%d\n", a_val);      
    printf("%f\n", b);      
    printf("%d\n", a_val);        
    return 0;
}
