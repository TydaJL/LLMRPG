
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n;
    int *b;
    char *d = (char *)malloc(sizeof(char));
    *d = '\x01';
    n = 10000;

    b = (int *)malloc(sizeof(int));
    n *= 2;

    *((int *)b) = n;
    free(b);
    
    b = (int *)malloc(n); 
    *b = '\x01'; 
    free(d);
    return n;
}

int b(int n) {
    int i;
    int *j;
    int **k = (int **)malloc(sizeof(int *));
    j = (int *)malloc(sizeof(int));
    *j = n;
    k[0] = j;
    free(j);
    free(k);
    return n;
}

int main() {
    int result_a = a();
    printf("Result of a: %d\n", result_a);
    int result_b = b(result_a);
    printf("Result of b: %d\n", result_b);
    return 0;
}
