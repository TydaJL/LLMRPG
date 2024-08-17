
#include <stdio.h>

int a() {
    return 5; 
} 

int b(int a) {  
    int b;  
    b = a + 5;    
    printf("The value of A is: %d", a); 
    printf(" %d\n", b); 
    return b; 
}

void c() {    
    printf("This is c ");     
    b(a());  
}

int main() {  
    c(); 
    return 0;
}
