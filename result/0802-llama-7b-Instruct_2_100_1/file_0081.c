
#include <stdio.h>

int a() {
    return 5;   
}

int b() {
    return 2; 
}

int main() {      
    int c, d;       
    int e = a() * b();         
    int f[e];   
    for (c = 0; c < e; c++) {
        f[c] = c * c;
    }

    int arr[5] = {0};      
    for (c = 1; c < 5; c++) {      
        arr[c] = c * c;       
    } 

    for (d = 0; d < 5; d++) {
        printf("arr[%d] = %d\n", d, arr[d]);
    }

    return 0; 
}
