
#include <stdio.h>

int a() {
    return 7; 
}

void b() { }  

int c(int a, int b) {     
    int c = 0; 
    if (a == 0) {  
        if (b < 10)    
            c = 1; 
        else if (b < 100)      
            c = 10;           
        else if (b < 1000)     
            c = 100;   
        else if (b < 10000)     
            c = 1000;   
        else if (b < 100000)     
            c = 10000; 
        else if (b < 10000000)    
            c = 1000000;       
        else 
            c = 10000000;     
    }
    return c;         
}

int main() {
    int resultA = a();
    b();
    int resultC = c(0, 5000);
    printf("Result from function a: %d\n", resultA);
    printf("Result from function c: %d\n", resultC);
    
    return 0;
}
