
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 0; 
    do { 
        ++n;  
        for (int i = 1; i < 1000; ++i)  
            printf("n :%4d\n", n); 
        for (int i = 1; i < 10; ++i)     
            printf("i    : %4d\n", i);    
    } while (n < 10);      
    return 0;         
}  

int main() {
    a();
    return 0;
}
