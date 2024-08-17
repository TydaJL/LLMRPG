
#include <stdio.h>

int a() {
    int i = 10 + 20 * 40 / 7;
    if (i == 50 / 2) {
        int b = i * 3 * i + i;
        return i;
    }
    return 0;
}

int b() {
    int c = 0;  
    for (int j = 0; j < 1; ++j) {  
        c += j; 
    }
    return a() + b();
}

void c() {
    int n = b(); 
    if (n < 50) { 
        int z = n * n; 
        for (int k = n; k < n + 20; ++k) {  
            z += z * z; 
        }  
    } 
}

int d(int i) {  
    return i + i + i; 
}

int main() {
    a();
    b();
    c();
    return 0;
}
