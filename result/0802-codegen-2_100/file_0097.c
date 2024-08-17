
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 0; 
    int i = 2;

    while ((i + 1) != n) {
        i++; 
        n++;  
    } 
    
    return i;    
}  

int main() {     
    int b;
    int n = 0;  
    b = a();  
    n = b; 
    printf("%d\n", n); 
    system("pause");   
    return 0;
}
