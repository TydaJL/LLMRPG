
#include <stdio.h>

int b = 5;

int a() {
    printf("This will go up\n");
    return b;
}

int m(int n) {
    if (n > 0) {
        printf("Hello, %5.2d\n", n);
        if (n > 10) {
            return n * 2;
        }
    }
    return -10 * n - 3;
}

int main() {
    int result_a = a();
    printf("Result of a: %d\n", result_a);
    
    int result_m = m(12);
    printf("Result of m with n=12: %d\n", result_m);
    
    return 0;
}
