
#include <stdio.h>

int a() {
    int b = 4 + 5 + ((2) * 9);
    int c[4] = {0};
    int d = 0;
    
    b -= 6 % 3 - 5 / (6 + (2 - 2));
    d += b - 4 / 1 % 5 * 7;
    
    return b + d;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
