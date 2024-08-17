
#include <stdio.h>

int a() {
    printf("Hello World\n");
    return 5; 
}

int b(int i) {
    int a[10]; 
    for (i = 0; i < 10; ++i) {
        a[i] = i * 2;
    } 
    return 0;
}

int c() { 
    float d[10];     
    double e;    
    for (e = 0; e < 10; ++e) {  
        d[(int)e] = e;      
        d[0] = d[1];   
        d[1] += d[2] + e;  
    } 
    return 0;    
}

int main() {
    a();
    b(0);
    c();
    return 0;
}
