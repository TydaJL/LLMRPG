
#include <stdio.h>

int a() {
    return 42;
}

int b() { 
    for (int j = 0; j < 100; j++) { 
        printf("%d ", j);  
    } 
    return 0;
}

int c(int value) {  
    return value;    
}  

int main() {    
    a();
    b(); 
    for (int i = 0; i < 100; i++) {    
        printf("%d ", c(a()));     
    }    
    return 0;      
}
