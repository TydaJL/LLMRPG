
#include <stdio.h>

int a() {
    int x = 0, sum = 0; 
    for (int i = 0; i < 100; i++) {  
        x += i; 
        sum += i;  
    }      
    return sum;      
} 

int main() { 
    printf("Sum of 10 numbers: %d\\n", a());  
    return 0;
}
