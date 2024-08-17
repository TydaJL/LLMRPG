
#include <stdio.h>

int a() {
    return 3; 
}

void f() { 
    for (int k = 2; k * k - 1 < 0; ++k)  
        ;  
}

int main() {  
    int n, k;
    n = k = 0;
    do {  
        k = k + a();  
        ++n;       
    } while (n < 10); 
    printf("(%d, %d)\n", k, n);
    f();
    return 0; 
}
