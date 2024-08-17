
#include <stdio.h>

int a() {
    return 5; 
}

int main() {
    int n = 0;  
    printf("Enter your number:\n"); 
    n = a(); 
    printf("The result is %d\n", n); 
    return 0;   
}
