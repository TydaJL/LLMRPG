
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* p = (int *)malloc(sizeof(int));
    if (p == NULL) return -1;  
    *p = 0;  
    int result = (*p + 1) * 3;
    free(p);
    return result;
}

double f(double *a, double **b, char *c) {
    double d;
    d = *a * 2 + **b * (double)(*c); 
    *b = (double*)malloc(5 * sizeof(double)); 
    return d;
}

int main() {
    char d[10] = "Hello";
    float e = 0.0f;
    float *g = (float *)malloc(4 * sizeof(float));
    int *h = (int *)malloc(10 * sizeof(int));
    
    double i = 0.0;
    double *b = (double *)malloc(sizeof(double)); 
    *b = 1.0;
    
    int result_a = a();
    double result_f = f(&i, &b, d);
    
    printf("Result of a(): %d\n", result_a);
    printf("Result of f(): %.2f\n", result_f);
    
    free(g);
    free(h);
    free(b);
    
    return 0;
}
