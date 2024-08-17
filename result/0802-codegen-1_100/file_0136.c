
#include <stdio.h>

int a() {
    return 0 + 2 - 7 + 9;
}

int b(int a) {
    return a + 5;
}

int g(int i) {
    return i + 1;
}

int main() {
    int result_a = a();
    int result_b = b(result_a);
    int result_g = g(result_b);
    
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Result of g: %d\n", result_g);

    return 0;
}
