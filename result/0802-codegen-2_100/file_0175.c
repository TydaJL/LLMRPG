
#include <stdio.h>

int a() {
    int b;
    if (b = a()) {
        return (b * b * b);
    }
    return 0; 
}

void c(int i, int j, int n) {
    int a;
    if (n == 0) return;
    if (i == j && n == 1) 
        a = 0;   
    else 
        a = i + j;  
    c(i, a, n - 1);
}

void d(int i, int k, int j, int n, int l) {  
    if (n == 0) {  
        return;  
    }       
    if (k >= j) {
        return;
    }
    d(i, k + 1, j, n - 1, l);
}

int main() {
    int res_a = a();
    c(1, 2, 3);
    d(1, 0, 3, 2, 0);
    return 0;
}
