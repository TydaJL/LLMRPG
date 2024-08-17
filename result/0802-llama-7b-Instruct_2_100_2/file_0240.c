
#include <stdio.h>

int a() {
    int x = 7; 
    int i = -2; 
    return x * (x - i * x / (i - x));
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
