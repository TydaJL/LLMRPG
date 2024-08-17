
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 5;  
}

double b(int x, char y) {
    int i = 0; 
    double d = 0.1; 
    return x + d + (double)y; 
}

int main() {
    int x = a(), y = a();
    float z = (float)x / y;  
    char name[10];
    
    printf("Enter your name: "); 
    fgets(name, sizeof(name), stdin); 
    printf("Welcome to my program, %s", name);
    printf(" "); 

    for (x = 1; x <= 10; x *= 2) {
        printf("Hello %.10e %d\n", z, x);    
    }       
    
    void *p = malloc(32); 
    free(p);
    
    return 0;
}
