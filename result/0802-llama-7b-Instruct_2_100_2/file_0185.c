
#include <stdio.h>

int a() {
    int b = 6; 
    int i = 5; 
    for ( ; b > 5; b = 5) 
        for (b = b + 5; i > 6; i = 0) 
            b = b * b * b - 1; 
    i +=  b * b - 2; 
    while (++b == b * i) 
        while (b != 5) 
            i *= i; 
    if (--b < 3) 
        b = b + 6;  
    else  
        b -= 1; 
    for ( ; --b > i; i = 1) 
        b = b / i; 
    return i * (b ? (b % b) : 1 + 2); 
}

int main() {    
    for (int x = 0; x < 4; x++) {
        double values[] = {1.0 / 3, 2.0 / 3, 1.0 / 6, 3.0 / 6};
        printf(" %f ", values[x] + a());
    }
    printf("\n");
    return 0;
}
