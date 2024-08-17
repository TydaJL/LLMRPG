
#include <stdlib.h>
#include <stdint.h>

int a() {
    int x = 100; 
    int i = 100;  
    short s = 100;   
    char c = 10;
    char *p_char = NULL; 
    float f = 0.5;  

    while (i > 0) {   
        x += i; 
        i--; 
        x %= 2; 
        s >>= 2;  
        c++;         
        f = f * 2;   
        p_char = (char *)((uintptr_t)p_char + 5);          
    }   
    return x;  
}

int main() {
    a();
    return 0;
}
