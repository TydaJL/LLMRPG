
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

void a() {
    double n[7];
    for (int i = 0; i < 7; i++) {
        n[i] = i * PI / 6; 
    }

    double c[7];
    double e[7];
    for (int i = 0; i < 7; i++) {
        c[i] = sin(n[i]) * cos(n[i]);
        e[i] = c[i];
    }
    
    for (int i = 0; i < 7; i++) {
        printf("n[%d]: %f, c[%d]: %f, e[%d]: %f\n", i, n[i], i, c[i], i, e[i]);
    }
}

int main() {
    a();
    return 0;
}
