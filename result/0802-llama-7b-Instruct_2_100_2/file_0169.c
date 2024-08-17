
#include <stdio.h>

int main(void) {
    int a = 0; 
    int b = 5; 
    while (a < 10) {   
        a = a + 1; 
        if (a % 2 == 0) {                                                                                                  
            printf("Even: %d\n", a);
        }                               
        else {                                                                                                        
            a = a + 1;                                    
            while (b != 0) { 
                b--; 
            }                                                                                                          
            a = a + 1; 
            b += 5; 
        }                                                   
    }                                                     
    return a;                                                                                                                                                         
}
