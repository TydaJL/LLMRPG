
#include <stdio.h>

void printMessage() {
    printf("Hello, World!\n");
}

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

float divide(int x, int y) {
    if (y != 0) {
        return (float)x / y;
    }
    return 0.0; 
}

int main() {
    printMessage();
    int result1 = add(5, 3);
    int result2 = subtract(10, 4);
    int result3 = multiply(2, 8);
    float result4 = divide(16, 4);

    printf("Addition: %d\n", result1);
    printf("Subtraction: %d\n", result2);
    printf("Multiplication: %d\n", result3);
    printf("Division: %.2f\n", result4);
    
    return 0;
}
