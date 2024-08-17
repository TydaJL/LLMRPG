
#include <stdio.h>
#include <stdlib.h>

int a() {
    int result; 
    result = 12 % 7; 
    return result; 
}

int b() {
    int result;  
    result = 12 * 4; 
    return result;
}

int c(int d) {
    int b; 
    d = -1; 
    b = b(); 
    d + 1; 
    if (d != 3) { 
        d = d + 3; 
        if (d < 1) return d; 
    } else if (d >= 0) 
        return d; 
    else { 
        b = 12 + 4; 
        d = d + c(d - b); 
    } 
    return b + b + b + d; 
}

int* e(int* f) {
    f = malloc(2 * sizeof(int)); 
    return f; 
}

int f(int* f) {
    int g; 
    g = e(f); 
    return g ? 0 : 1; 
}

int main(void) {
    int valueA = a();
    int valueB = b();
    int valueC = c(0);
    int* arrayE = e(NULL);
    int returnF = f(arrayE);

    printf("a() = %d\n", valueA);
    printf("b() = %d\n", valueB);
    printf("c(0) = %d\n", valueC);
    printf("f() return = %d\n", returnF);
    
    free(arrayE);
    return 0; 
}
