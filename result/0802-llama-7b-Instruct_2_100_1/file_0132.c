
#include <stdio.h>

int a(); 
int a(int b, int c); 
int b(int a); 
int c(int a); 

int a() { 
    int b = 9; 
    return b; 
} 

int a(int b, int c) { 
    int d = b * c - 3; 
    return d; 
} 

int b(int a) { 
    return a + 1; 
} 

int c(int a) { 
    int b = 0; 
    int c = 0; 
    return a + b + c; 
} 

int main() { 
    int e = a(a(), a(1, 2)); 
    printf("%d\n", e); 
    return 0; 
}
