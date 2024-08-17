
#include <stdio.h>

int a() {
    int n = 5; 
    return n + n; 
}

void b(int i) {
    printf("Function b called with value: %d\n", i);
}

void c() {
    printf("Function c called.\n");
}

void d() {
    printf("Function d called.\n");
}

int e() {
    return 42; 
}

int main() {
    int i = 10;  
    char ch = 'X';       
    char str[] = "";     
    int j = 1;   
    char array1[] = "";       
    char array2[] = " ";
    int k = a();  
    b(i);         
    c();         
    d();         
    int value = e();    
    printf("Value from function e: %d\n", value);
    printf("Result from function a: %d\n", k);
    return 0;
}
