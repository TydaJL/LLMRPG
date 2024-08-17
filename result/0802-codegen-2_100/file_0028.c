
#include <stdio.h>

int a() {
    return 3; 
} 

int b(void) { 
    return 0; 
}

void c() {       
    printf("This is c.\n");  
}    

int d() {   
    return 5;       
}   

float e() {       
    return 2.0;    
}     

void f(int *a, float b, int *c, int d) {    
    printf("a: %d  b: %.1f  c: %d\n", *a, b, *c, d);          
}      

int main() {   
    printf("Hello World\n\n\n\n\n"); 

    int x = a();
    int y = d();
    float z = e();
    int c_val = 4;
    
    c();
    f(&x, z, &c_val, y);

    return 0; 
}
