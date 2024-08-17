
#include <stdio.h>

int a() {
    int b = 1; 
    while (1) {
        b = b + 2;  
        if (b == 4) return b;    
        else if (b == 10) return 2;  
        else break; 
    }   
    return b;    
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
