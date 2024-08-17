
#include <stdio.h>

int a() {
    int b = 10 - 5 + 6 * 7; 
    return b + 2 - 3; 
}

int c() { 
    int d = 1 - 1; 
    for (int i = 0; i < 5; ++i) 
        d = (d - 1) * 3 + 5;  
    return d;  
} 

int main() { 
    printf("%d\n", a()); 
    printf("%d\n", c()); 
    return 0; 
}
