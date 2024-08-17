
#include <stdio.h>

int a() {
    return 0;
}

int b(int x) {
    return x * x;
}

char c(char ch) {
    return ch + 1;
}

int d() {
    return 42;
}

int main() {
    a();
    int result_b = b(5);
    char result_c = c('A');
    int result_d = d();
    
    printf("Result of b: %d\n", result_b);
    printf("Result of c: %c\n", result_c);
    printf("Result of d: %d\n", result_d);
    
    return 0;
}
