
#include <stdio.h>

int a() {
    int n = 4; 
    for (int c = 0; c < n; ++c) { 
        int k = c * (c * c);
        return k;     
    } 
    return n;  
}

int b() {
    return 0; 
}

int c() {
    return 10; 
}

int d();

int f(int a, int d) { 
    return a + d; 
}

int main() {
    for (int i = 1; i > 0; i--) {
        break; 
    }     
    printf("%d\n", b());
    printf("%d\n", a());
    printf("%d\n", c());
    return 0; 
}
