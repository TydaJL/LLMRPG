
#include <stdio.h>

void function1() {
}

void function2() {
}

int function3(int x) {
    return x;
}

int function4(int x, int y) {
    return x + y;
}

int function5(int x, int y, int z) {
    return x * y * z;
}

int main() {
    function1();
    function2();
    int result1 = function3(10);
    int result2 = function4(5, 15);
    int result3 = function5(2, 3, 4);
    
    printf("Result of function3: %d\n", result1);
    printf("Result of function4: %d\n", result2);
    printf("Result of function5: %d\n", result3);
    
    return 0;
}
