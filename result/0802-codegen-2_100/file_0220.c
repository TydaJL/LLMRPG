
#include <stdio.h>

int a() {
    return 1;
}

int main() { 
    int b; 
    int *ptr;  
    b = 2 * (3 * 4);  
    ptr = &b;   
    *ptr = 5 % 6;     
    printf("Value of b: %d\n", b);
    printf("Return value of a(): %d\n", a());
    return 0;  
}
