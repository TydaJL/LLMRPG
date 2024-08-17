
#include <stdio.h>

int a() {
    return 1 + 1; 
}

int b() {
    int b_val = a(); 
    b_val = b_val - 1; 
    return 1 + b_val; 
}

int main() {   
    int c; 
    c = b();
    printf("%d ", c);     
    printf("\n");
    return 0; 
}
