
#include <stdio.h>

int a() {
    int result = 0; 
    int i = 12 - 1; 
    for( ; i > 0; i--){  
        result += i * 2;  
    }  
    return result;    
}

int b() {   
    int result = 0; 
    int k = 0;   
    for (int i = 0; k <= 30; ) {   
        i++;    
        k = (i % 3);       
        result = i + k * k; 
    }   
    return result + k; 
}

double c() {        
    float f = 0.5;  
    double d = 4.56 + f;    
    return d; 
}

int d() {       
    return 0; 
}

int main() {
    printf("Result of a: %d\n", a());
    printf("Result of b: %d\n", b());
    printf("Result of c: %lf\n", c());
    printf("Result of d: %d\n", d());
    return 0;
}
