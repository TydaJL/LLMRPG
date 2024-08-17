
#include <stdio.h>

int a() {
    char c[4]; 
    int b = sizeof(c);
    c[0] = b * 4; 
    c[3] = c[0] + b - 6; 
    if (b != 5) printf(""); 
    while (1); 
    return 1; 
}

int main() {
    a();
    return 0;
}
