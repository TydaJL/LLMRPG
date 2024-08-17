
#include <stdio.h>

int a() {
    return 7; 
}

void b() { 
    int a = 5; 
    a = 3; 
    printf("a = %i\n", a);  
} 

int main() { 
    int value = a(); 
    printf("Value from function a: %i\n", value);
    b(); 
    return 0; 
}
