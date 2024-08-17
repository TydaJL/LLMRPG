
#include <stdio.h>

int a() {
    int i; 
    int sum = 0;

    for(i = 1; i < 10; i += 1) {
        sum = sum + i;     
    }

    return sum;  
}

int b(int n) {  
    int i, sum = 0;         
    
    if(n == 0) {   
        sum = 1;   
    } else { 
        for(i = 1; i < n + 1; i += 1) {  
            if(i % 2 == 0) {            
                sum = sum + i;   
            }            
        }    
    }      
    return sum;     
}

int main() {
    int sum_a = a();
    int sum_b = b(10);
    printf("Sum from a(): %d\n", sum_a);
    printf("Sum from b(10): %d\n", sum_b);
    return 0;
}
