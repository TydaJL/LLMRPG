
#include <stdio.h>

int a() {
    int sum = 0;

    if (1 == 1)  
        sum = sum + 100; 
    else if (1 == 1)  
        sum = sum + 200;  
    else {   
        sum = sum + 300;  
        printf("sum = sum + 300\n");    
    }     
    return sum;   
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
