
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* b = (int *)malloc(10 * sizeof(int));
    int c = 0;  
    for (int d = 1; d < 1000000000; d++) {
        for (c = 1; c <= 10; ++c) { 
            for (d = 0; c * c * c * c * c <= 1000000000; ++d) {}
        }
    }
    free(b);   
    return c;   
}

int b() { 
    return a(); 
}

int c(void) {  
    return (a() + b());  
} 

int d(int x) {   
    return x - a(); 
} 

int f(int x, int y) { 
    return x * a() - y * b(); 
}

int main() {
    a();
    b();
    c();
    d(5);
    f(2, 3);
    return 0;
}
