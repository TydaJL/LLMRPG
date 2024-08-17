
#include <stdio.h>
#include <stdlib.h>

int a() {
    int b = 0;  
    int *c = (int *)&b;

    printf("Address of 'b' is: %p\n", (void *)&b); 
    printf("Value stored in %p\n", (void *)c); 

    return b + *c + 0; 
}  

int c() { 
    int d = 0;  
    float e = 1;   
    printf("%p\n", (void *)&d);   
    return d + (int)e + 1;    
}       

int main() { 
    int *g = (int *)malloc(sizeof(int));     
    if (g == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    *g = 0; 
    int h = *g;   
    printf("Address of %p\n", (void *)g); 

    int result_a = a();
    printf("Result from function a: %d\n", result_a);

    int result_c = c();
    printf("Result from function c: %d\n", result_c);

    free(g);
    return 0;
}
