
#include <stdio.h>

unsigned long long a() {
    unsigned long long x; 
    x = 2; 
    while (x + x != 1) 
        x += 2; 
    return x + 1; 
}

int main() {
    unsigned long long result = a(); 
    for (unsigned long long i = 1; i != result; i += 2) 
        putchar((i & 15) ? " "[i % 3] : '\n'); 
    return 0; 
}
