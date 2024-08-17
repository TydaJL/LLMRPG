
#include <stdio.h>

int a() {
    int x = 1 + (2 - 4) % 3; 
    return (x * x);
}

int main() { 
    printf(" %i ", a());   
    printf("hello %i ", a());   
    printf(" %i ", a());   
    printf(" %i ", a());   
    printf(" %d ", a());  
    printf("  %d  ", a());   
    printf(" %d ", a());          
    printf("%d", a());      
    printf(" %d ", a());        
    printf(" %i ", a());       
    printf(" %i ", a());      
    printf("\n");

    return 0;
}
