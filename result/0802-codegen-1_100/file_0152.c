
#include <stdio.h>

void inputNumbers(int *a, int *b) {
    printf("Enter any two numbers: ");
    scanf("%d %d", a, b);
}

int findLargest(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2, largest;
    
    inputNumbers(&num1, &num2);
    largest = findLargest(num1, num2);
    printf("The largest is: %d\n", largest);
    
    return 0;
}
