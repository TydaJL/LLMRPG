
#include <stdio.h>

int a() {
    char ch; 
    int x; 
    printf("Enter a number:\n");   
    scanf("%d", &x);  
    printf("Enter a letter:\n");  
    scanf(" %c", &ch);
    return x + (int)ch;    
} 

int b() { 
    int i = 0, j, k;   
    for (j = 1; j <= 5; ++j) {  
        for (k = 1; k < j; ++k) {  
            i += j * k;    
        } 
    } 
    return i;   
} 

int main() { 
    int sum = a();
    printf("Sum of number and ASCII value of letter: %d\n", sum);
    
    int result = b();
    printf("Result of function b: %d\n", result);
    
    return 0; 
}
