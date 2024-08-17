
#include <stdio.h>

double a() {
    double x[2][2] = {0};  
    return x[0][0] + 0;  
}

int main() {
    double result = a();
    printf("Result: %f\n", result);
    return 0;
}
