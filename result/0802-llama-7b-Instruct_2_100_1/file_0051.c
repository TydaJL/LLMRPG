
#include <stdio.h>

int a() {
    int x = 5; 
    return x - 1; 
}

char b() { 
    char y = 'a'; 
    return y; 
}

int c() { 
    return a(); 
}

float d() { 
    return 5.0; 
}

double e() { 
    return a() + b() + c() / d(); 
}

int f(float x, char *z) {             
    float f = x;  
    char ch = z[2];   
    char ch_arr[] = {'A', ' ', 'B', '\n'};    
    int i = sizeof(f) + sizeof(ch); 
    return i - 6; 
}                 

int g() {      
    return f(e(), "hello"); 
}                                     

int main() {    
    int i = 0, j = 0, k = 0, n = g(); 
    printf("Value of n: %d\n", n);
    return 0;
}
