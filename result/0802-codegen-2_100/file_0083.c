
#include <stdio.h>

int a() {
    int i = 0; 
    return i + 1;  
}

int c() {     
    int i = a();  
    return i + 2; 
} 

int d() { 
    int i = 0;    
    return ++i;   
} 

int main() {    
    int i;   
    i = d();     
    printf("Result of d(): %d\n", i);
    i = a();     
    printf("Result of a(): %d\n", i);
    i = c();     
    printf("Result of c(): %d\n", i);
    return 0;    
}
