
#include <stdio.h>

int a() {
    return 2;
}

void powdac() {
}

double speitomut(int a) {
    return a * 2.0; 
}

float spsosi(double data) {
    return (float)data; 
}

int main() {
    int result_a = a();
    printf("Result of a: %d\n", result_a);
    
    powdac();
    
    double result_speitomut = speitomut(result_a);
    printf("Result of speitomut: %f\n", result_speitomut);
    
    float result_spsosi = spsosi(result_speitomut);
    printf("Result of spsosi: %f\n", result_spsosi);
    
    return 0;
}
