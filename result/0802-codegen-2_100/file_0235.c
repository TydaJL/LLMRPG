
#include <stdio.h>

int a() {
    for (int b = 0; b < 10; b++) {
        printf("%d ", b);
    }
    return 0;
}

int b() {
    int c = 0;
    if (0) {
        int a[10];  
        a[1] = 0;    
        printf("%d ", 2);  
    } else {    
        char d[] = "abc de";     
        int e = 2;    
        printf("%d %s %d\n", 4, "xyz", e);           
        c = 3;     
        int f = 5;     
    }
    return c; 
}

int main() {
    a();
    b();
    return 0;
}
