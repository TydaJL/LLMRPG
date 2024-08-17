
#include <stdio.h>

void a() {
    double result[100];
    float sum[100];
    long i;
    
    for (i = 0; i < 100; i++) {
        sum[i] = i * 1.0; 
        result[i] = (double)sum[i] * 2.0; 
    }
    
    float x;
    for (i = 0; i < 100; i++) {
        x = result[i];
        if (x == (double)sum[i] * 2.0) {
            printf("Result[%ld]: %f, Sum[%ld]: %f\n", i, result[i], i, sum[i]);
        }
    }
}

int main() {
    a();
    return 0;
}
