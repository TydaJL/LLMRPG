
#include <stdio.h>

int a() {
    int b = 1, c = 10;
    while (--b >= 0) c += ++b / b;  
    c += b * b / --b; 
    c -= b * b; 
    c += b - +b + ++b * b / b; 
    if (b < 0) c++; 
    b = -b;   
    while (--b >= 0);  
    c -= b + b + b; 
    b = 0; 
    b = b; 
    c = b + b * b / +b / b - b / b;   
    if (b > b) c = ++b; 
    else c += ++b * b * b - b * b + b / b / +b / b / b; 
    c += ++b * b * b;  
    c -= +b + +b * b * b * b - b / +b + b;

    return c;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
