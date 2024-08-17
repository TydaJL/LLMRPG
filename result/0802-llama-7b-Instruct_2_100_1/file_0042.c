
#include <stdio.h>

int a() {
    return 2 + 2 + 4; 
} 

char b[5] = { 'a', 'd', 'd', 's', 'k' }; 

int c() {           
    return b[0];     
} 

double d() {           
    double f = 2;        
    for (int j = 1; j < 5; ++j) {     
        f += 1.0 / j;          
    }     
    return f;  
} 

void f() {            
    double a_val = d();         
    double g = d();    
    double l = d();        
    for (int m = 3; m > 0 && g > a_val && l == l; --m) {      
        a_val = d();                      
        g = d();    
    }
} 

int main() {
    printf("a() = %d\n", a());
    printf("c() = %d\n", c());
    printf("d() = %lf\n", d());
    f();
    return 0;
}
