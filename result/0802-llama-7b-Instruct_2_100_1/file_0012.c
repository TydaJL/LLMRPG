
#include <stdio.h>

int func_a() {
    int x = 1;
    int z = (x - 1);
    int y = (z != 0) ? (x / z) : 0;
    if (x != y) {
        z = 10 + y;
    } else {
        z += x;
    }
    return z;
}

int func_b() {
    return 5;
}

int main() {
    int result_a = func_a();
    int result_b = func_b();

    int d = result_a + result_b * 2;

    printf("Result A: %d\n", result_a);
    printf("Result B: %d\n", result_b);
    printf("Final Result: %d\n", d);
    
    return 0;
}
