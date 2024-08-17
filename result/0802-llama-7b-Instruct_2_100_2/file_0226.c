
#include <stdio.h>

int a() {
    char b = 1; 
    while (1) {  
        char c = b * 4; 
        b = (c + b / 3);  
        c = c * 12 + c / 10 + b;  
    } 
    return 0;
}

int main(void) {
    int i; 
    i = 1; 
    int j;  
    for (; i <= 3; i++) {  
        for (j = i; j <= 3; j *= 4) {   
            i *= i; 
            i = j; 
            j = j + j; 
            i = j + j - 1; 
            j = i + j; 
            if (i % i == i) {   
                j = i * j + i; 
                if (i == j) { 
                    j++;
                }
            }
        }
    }
    a();
    return 0;
}
