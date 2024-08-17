
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 0;
    char *b = malloc(100);
    if (b == NULL) {
        return -1;
    }
    for (int i = 0; i < 999999999; i++) {
        if (!(b = (char *) realloc(b, 101))) {
            n -= 100000000;
            break;
        } else {
            b[i % 101] = 'a';
        }
    }
    free(b);
    return n;
}

int b(int c) {
    double x[10000];
    int d = c * c;
    int i = 0;
    while (d > 0 && i < 10000) {
        x[i] = 0.0;
        i++;
        d--;
    }
    return d;
}

int main() {
    int result_a = a();
    printf("Result of function a: %d\n", result_a);
    
    int result_b = b(10);
    printf("Result of function b with input 10: %d\n", result_b);
    
    return 0;
}
