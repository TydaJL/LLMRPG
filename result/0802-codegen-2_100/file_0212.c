
#include <stdio.h>
#define SIZE 100000

int a() {
    int i, n;  
    i = 0;   
    n = 5; 
    i = n;   
    return i;   
}

int main(void) {        
    double d[SIZE];         
    int i, n;    

    for (i = 0; i < SIZE; i++) {   
        d[i] = (double)i;     
    }       

    for (n = 0; n < 100; n++) {
        printf("%lf\n", d[n]);
    }
    
    int result = a();
    printf("Result from function a: %d\n", result);
    
    return 0;
}
