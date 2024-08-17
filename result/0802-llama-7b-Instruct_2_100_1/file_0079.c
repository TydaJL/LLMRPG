
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    return 1;   
}  

int b() {  
    return 2; 
}    

int *c() { 
    static int *d = NULL;                                 
    if (!d) {   
        d = (int *)calloc(5, sizeof(int));          
        memset(d, 0, 5 * sizeof(int));         
    }  
    return (d + 4);    
}       

int *e() { 
    static int *f = NULL;                     
    if (!f) {
        f = (int *)malloc(5 * sizeof(int));
        memset(f, 0, 5 * sizeof(int));
    }
    return f; 
}

int main() {
    int result_a = a();
    int result_b = b();
    int *result_c = c();
    int *result_e = e();
    
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Value from c: %d\n", *result_c);
    printf("First element from e: %d\n", *result_e);
    
    free(result_e);
    return 0;
}
