
#include <stdio.h>

int a() {
    return 42; 
}

void b(int a, int b) {
    printf("a + b is %i\n", a + b);   
}

void c(int a, int b, int c) {   
    int x, y, z;    
    printf("a + b = %i\n", a + b); 
    x = a + b;
    y = b; 
    z = x + y;  
    printf("z %i\n", z);   
}

int main() {
    int valA = a();
    int valB = 10;
    int valC = 5;

    b(valA, valB);
    c(valA, valB, valC);

    return 0;
}
