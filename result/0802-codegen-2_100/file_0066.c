
#include <stdio.h>

int a(int x, int y, int z) {
    return x + (y *= z);
}

int main() {
    int a_value, b_value;
    printf("Enter a: ");
    scanf("%d", &a_value);
    printf("Enter b: ");
    scanf("%d", &b_value);
    
    int result = a(a_value, b_value, 2);
    printf("Result of a(x, y, z) = %d\n", result);
    printf("a + b = %d\n", a_value + b_value);
    printf("%d + b = %d\n", a_value, b_value);
    printf("%d + %d\n", a_value, b_value);
    printf("%d %d\n", a_value, b_value);
    
    return 0;
}
