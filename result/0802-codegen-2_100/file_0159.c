
#include <stdio.h>

int a() {
    return 4; 
}

int main() { 
    const char *str = "Hello, World!";
    printf("%s\n", str);
    
    int x = 0;
    
    while (x < 10) {    
        x += 1; 
        
        if (x == 5) {
            a(); 
            printf("Function a() called.\n");
        }   
    } 
    
    return 0;
}
