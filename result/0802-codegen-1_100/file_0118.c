
#include <stdio.h>

int a() {
    int i = 100 + 1 * 1 - 2; 
    return i;
}

int b(int x) {
    return (3 % 7 - 5 < 0) ? 1 : 0;
}

int main() {
    int result_a = a();
    printf("Result of a(): %d\n", result_a);

    int result_b = b(2);
    printf("Result of b(2): %d\n", result_b);
    
    return 0;
}
