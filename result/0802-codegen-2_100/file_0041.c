
#include <stdio.h>

int a() {
    int i = 0, n; 
    for (n = 0; n < 10; n++)  
        i += n; 
    return i;   
}  

int main() {
    printf("%s ", "I'm a program ");    
    printf("that uses %d bits to store %d numbers. ", sizeof(int) * 8, 10 * sizeof(int));  
    printf("the sum of the integers from 0 to 9 is: %d\n\n", a());  
    return 0; 
}
