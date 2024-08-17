
#include <stdio.h>

int a() {
    return 10 * 9 - 5 + 4 + 1 * 100 / 1000 + 4 / 20 + 100;
}

int b() {
    return 10 - 5 + 5 + 10 * 5 * 20 + 2 + 20 - 30 * 100;
}

int main() {
    int result_a = a();
    int result_b = b();
    
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    
    return 0;
}
