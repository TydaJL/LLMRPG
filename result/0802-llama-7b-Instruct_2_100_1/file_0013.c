
#include <stdio.h>

int a() {
    int i = 13; 
    int j = -4; 
    int k = 5; 
    return (i - j) * k; 
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
