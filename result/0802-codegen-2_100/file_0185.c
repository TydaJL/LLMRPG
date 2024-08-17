
#include <stdio.h>

int a() {
    int i; 
    for (i = -1; i < 0; ++i) {  
        printf("i :%5d \\n", i);   
    }
    return i; 
}

int b() { 
    int a[100000];    
    for (int j = 0; j <= 9; ++j) { 
        a[j] = j + 1;  
    }    
    for (int j = 10; j > 0; --j) {    
        a[j] *= 2;  
    }         
    return a[0] + a[10] + a[99];     
}

int main() {
    a();
    int result = b();
    printf("Result of b: %d\\n", result);
    return 0;
}
