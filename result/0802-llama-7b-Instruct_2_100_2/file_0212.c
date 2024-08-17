
#include <stdio.h>

int function_a() {
    int x = 0, z = 0;
    for (z = 1 + z * x * z; x > 0; x++) x = 0;
    return x;
}

void function_a_params(int x, int y) {
    int z = 0;
    for (z = x + y * x; x > 0; x--) {
        if (x > 0 && y == 0) x = x + y * z;
    }
}

int function_a_char_array(char x[], int y) {
    while (y != 0) {
        for (int i = 0; x[i] != 0; i++) {
        }
        y--;
    }
    return y;
}

int function_a_char(int x, int y) {
    return x + y;
}

int main() {
    int result1 = function_a();
    int result2 = function_a_char('a', 10);
    char str[] = "Hello";
    int result3 = function_a_char_array(str, 5);
    function_a_params(2, 3);
    return 0;
}
