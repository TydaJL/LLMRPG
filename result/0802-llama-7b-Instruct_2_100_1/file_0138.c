
#include <stdio.h>

int a() {
    int sum = 10 / 3;
    int x = 5;
    sum = (x * sum) * 2;
    sum += x; 
    sum += 2;  
    sum *= (x = 2);  
    x = (sum = x + 1) + x * (x * sum);  
    return sum;   
}

int main(void) {          
    int result = a();         
    printf("Result: %d\n", result);
    return 0;                                
}
