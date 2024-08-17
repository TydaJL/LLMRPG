
#include <stdio.h>

int a() {
    int x = 3; 
    int a = 5; 
    return x * x * a * a * a; 
}

int b(); 

int main() {
    int y = a() + b();  
    printf("%d\n", y);  
    return 0; 
}

int b() {
    int z = 3; 
    return z + a(); 
}
