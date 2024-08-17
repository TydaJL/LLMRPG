
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    int n = 0;
    int *b = (int *)malloc(sizeof(int) * 10000);
    if (b == NULL) return -1;
    for (; n < 10000; n++) {
        b[n] = n - 1;
    }
    free(b);
    return n;
}

double c(int x) {
    int i = 1;
    double s = 0.0;
    for (; x > 0; x -= i) {
        s = s + sin(i);
        i = i * 2;
    }
    return s;
}

void d(double *x, double *y, long n) {
    int i;
    double s = 0;
    for (i = 0; i < n; i++) {
        s += x[i] * y[i];
    }
    printf("Dot product: %lf\n", s);
}

int main() {
    a();
    int x = 10;
    double result = c(x);
    printf("Result from c: %lf\n", result);

    double *xArr = (double *)malloc(sizeof(double) * 5);
    double *yArr = (double *)malloc(sizeof(double) * 5);
    if (xArr == NULL || yArr == NULL) return -1;
    
    for (int i = 0; i < 5; i++) {
        xArr[i] = i + 1;
        yArr[i] = (i + 1) * 2;
    }
    d(xArr, yArr, 5);
    
    free(xArr);
    free(yArr);
    return 0;
}
