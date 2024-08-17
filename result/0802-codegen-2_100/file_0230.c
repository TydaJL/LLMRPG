
#include <stdio.h>
#include <stdbool.h>

int a() {
    int i, sum = 0;  
    char c;

    for (c = 1, i = 1; i != 10;) { 
        sum += i + c - '1';         
        if ((i < 10) & (i < 20))         
            i++;  
        else 
            i = 0; 
    } 
    return sum; 
}

int main() {  
    int a_value;       
    double b;        
    
    while (scanf("%d", &a_value) == 1) {         
        b = (double)a_value / 0.9;          
    }  
    
    int sum_result = a();
    printf("Sum from function a: %d\n", sum_result);
    
    return 0;
}
