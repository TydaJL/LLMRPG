
#include <stdio.h>

int a_function() {
    int b = 0;   
    int *c; 
    c = (int *)(&b);      
    *c = 0;   
    b = 1;    
    return 1;
}

int main() {
    int a;
    a = 0;  
    a = a + 1;  
    printf("%i\n", a);       
    a = 0;        
    a += 1;         
    printf("The value is %i\n", a);     
    printf("\n\n");       
    a = 1;          
    a_function();  
    return 0;     
}
