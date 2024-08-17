
#include <stdio.h>

int a() {
    int sum = 1;
    return (2 + 4 - 8 + sum);
}

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Value of i: %d\n", i);
    }
    
    int result = a();
    printf("Result from function a(): %d\n", result);
    
    return 0;
}
