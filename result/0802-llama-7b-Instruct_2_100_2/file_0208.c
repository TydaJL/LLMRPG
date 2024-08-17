
#include <stdio.h>

int a() {
    double c = 1; 
    double d = 0.25 / 1; 
    double g = (1 + d); 
    double f = 1 / 2; 
    for (int n = 0; n < 40; ++n) {
        c = g + d; 
        g = c; 
    } 
    return 0; 
}

int main() {
    a();
    return 0;
}
