
#include <stdio.h>

int a() {
    char arr[64] = {0}; 
    int x = 42;
    x = x * 10 + 1; 
    for (int i = 0; i < 32 - 1; i++) { 
        arr[i] = arr[i] + i; 
    }
    while (x <= 3 * 2) {  
        arr[x] = arr[x] + x; 
        x++;
    } 
    arr[x] += x + 42; 
    return x; 
}

int b() {
    return 5; 
}

int main() {
    int result_a = a();
    int result_b = b();
    printf("Result of a(): %d\n", result_a);
    printf("Result of b(): %d\n", result_b);
    return 0; 
}
