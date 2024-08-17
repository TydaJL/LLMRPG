
#include <stdio.h>

int a() {
    int i = 1; 
    return i * i + i; 
}

int main() {  
    int b = 0; 
    b = b + 1;  
    printf("%i\n", a()); 
    return 0;
}
