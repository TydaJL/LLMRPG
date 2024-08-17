
#include <stdio.h>
#include <stdlib.h>

int a() {
    int a = 2; 
    int* p;    
    p = (int *) calloc(10, sizeof(int));      
    printf("%d\n", a); 
    free(p); 
    p = (int *) calloc(10, sizeof(int)); 
    printf("%p\n", p);  
    free(p); 
    return 0;       
}

int main() {    
    int b = 0;  
    int* p;        
    int c;

    a();
    return 0;
}
