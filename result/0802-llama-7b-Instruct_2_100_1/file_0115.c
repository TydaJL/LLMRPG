
#include <stdio.h>

int a() {
    int x = 5; 
    return x * x + (x % 2); 
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
