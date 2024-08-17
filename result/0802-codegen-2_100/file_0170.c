
#include <stdio.h>

int a() {
    int sum = 0, n = 1; 
    while (n <= 10) {
        sum = sum + 2 * n; 
        n++;
    }
    return sum;  
}

int main() {
    int result = a();
    printf("The sum is: %d\n", result);
    return 0;
}
