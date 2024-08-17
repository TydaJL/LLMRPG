
#include <stdio.h>

int a() {
    int x; 
    x = 5; 
    x++; 
    return x; 
} 

int main() {
    int x;  
    x = sizeof(int);  // Corrected to get the size of int type.
    printf("%d\n", a());
    printf("%d\n", a() + 4); 
    printf("%d\n", x + a() + 4);        
    if (x < a()) { 
        printf("%d\n", x); 
    }     
    printf("%c\n", 'a');    
    printf("%c\n", 'c');
    return x + a(); 
}
