
#include <stdio.h>

double a() {
    double p = 5.0;  
    double r = 3.0;           
    return (p * p * r) - (p / r);
}

int main() {
    double result = a();
    printf("Result: %f\n", result);
    return 0;
}
