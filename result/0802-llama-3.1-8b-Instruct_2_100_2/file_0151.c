
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    int b[100];
    double c = 1;
    double d[100];
    for (i = 0; i < 100; i++)
        b[i] = i;
    for (i = 0; i < 100; i++) {
        c = c + i;  
        d[100 - i - 1] = c;
    }
    return 0;  
}

void f(int *a, int b) {
    int c = *a;
    int *e;
    e = (int *)((char *)&c + b);
    *e = c;
}

int main() {
    a();
    int *b = (int *)malloc(sizeof(int));
    if (b == NULL) {
        return 1;
    }
    *b = 42; 
    f(b, 0);
    free(b);
    return 0;
}
