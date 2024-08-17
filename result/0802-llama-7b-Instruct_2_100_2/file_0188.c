
#include <stdio.h>

int a() {
    return 5; 
}

int main(void) { 
    int i = 1; 
    int j = 5; 
    int sum = 0; 
    
    while (j > 0) {  
        sum += a(); 
        j--; 
    } 
    
    printf("Sum: %d\n", sum);
    return 0; 
}
