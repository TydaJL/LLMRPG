
#include <stdio.h>
#include <math.h>

int a() {
    int i, j, n = 0;
    for(i = 0; i < 10; i++) {
        for(j = i; j <= i * i; j++) {
            n++;
        }
    }
    return n;
}

int main() {
    int i, n;
    double d = 0;
    float f = 0;
    
    n = a();
    
    for(i = 100; i < 1000; i++) {
        if(i % 7 == 5 && i > 100) {
            // Do something if needed
        }
    }

    printf("Value of n from function a: %d\n", n);
    
    return 0;
}
