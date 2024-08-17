
#include <stdio.h>

int function1() {
    int b = 5;
    return (b + 5) + 2;
}

int function2() {
    float b = 2;
    if (1 + 3 > 6)
        return 9;
    else
        b += 7 * 2;
    
    return (int)b;
}

int main() {
    int result1 = function1();
    int result2 = function2();
    printf("Result from function1: %d\n", result1);
    printf("Result from function2: %d\n", result2);
    return 0;
}
