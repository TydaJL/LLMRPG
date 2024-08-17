
#include <stdio.h>
#include <stdarg.h>

int a() {
    int x = 0; 
    return x + 1; 
}

void foo(int n, ...) {    
    va_list argp;     
    va_start(argp, n); 
    for(int i = 0; i < n; i++) {
        int x = va_arg(argp, int);
        printf("%d ", x);
    }
    va_end(argp);
}

int main() {  
    int n = 5;  
    for (int i = 0; i < n; i++) {  
        printf("%d ", a()); 
    }  
    printf("\n");
    
    foo(3, 1, 2, 3);
    
    return 0; 
}
