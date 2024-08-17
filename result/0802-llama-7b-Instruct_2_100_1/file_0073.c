
#include <stdio.h>

int a() {
    int a = 1; 
    return a *= a + a; 
} 

void b(char *s) {
    int x = 0; 
    while (*(++s) > ' ') 
        ++x; 
    printf("\n\"%s\"\n%d\n", s, x);
}    

void c(double x) {
    if (x >= 1e-4) 
        printf("\n%f\n", x);   
    else    
        printf("\n%e\n", x); 
} 

void d(int x) { 
    int y = x; 
    for (x; x; x--) {
        if (y % x != 0) 
            continue; 
        if (y == 1) 
            printf("%d is a prime\n", y); 
        return; 
    }
    if (y != 1) 
        printf("%d is not a prime\n", y);
}

int main() {
    a();
    char testStr[] = "Hello World";
    b(testStr);
    c(0.00001);
    d(7);
    return 0;
}
