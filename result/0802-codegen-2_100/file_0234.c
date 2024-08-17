
#include <stdio.h>
#include <stdlib.h>

float a() {
    char c;  
    int b;   
    float x = 0;

    printf("Enter an integer, a character and a float: ");
    scanf("%d %c %f", &b, &c, &x);
    return (b + c) / x;
}

int main() {
    float result = a();
    printf("Result from function a: %.2f\n", result);
    return 0;
}
