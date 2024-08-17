
#include <stdio.h>

int a() {
    return 3; 
}

int b() {
    return 1; 
}

int main() { 
    int c, d, e, f, g;
    c = a();
    d = a();
    e = b();
    f = b();
    g = b();
    
    printf("a() returns: %d, %d\n", c, d);
    printf("b() returns: %d, %d, %d\n", e, f, g);
    
    return 0;  
}
