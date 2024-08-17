
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int a() {
    int n = rand();
    int* b = malloc(sizeof(int));
    if (b == NULL) {
        return 0;
    } else {
        *b = n;
        int value = *b;
        free(b);
        return value;
    }
}

double f(int n, int k) {
    double sum = 0.0;
    for (int m = n; m <= k; m++) {
        double x = (double)m;
        x = x * sin(M_PI * x);
        sum = sum - sin(M_PI + x);
    }
    return sum / (sin(n + M_PI));
}

int main() {
    srand((unsigned int)time(NULL));
    int randomValue = a();
    printf("Random Value: %d\n", randomValue);
    
    double result = f(1, 5);
    printf("Result of f(1, 5): %f\n", result);
    
    return 0;
}
