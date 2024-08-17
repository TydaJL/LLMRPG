
#include <stdio.h>

int function_a(int x, int y) {
    return x + y;
}

void print_result(int result) {
    printf("Result: %d\n", result);
}

int main() {
    int i = 3, j = 2;
    int result = function_a(i, j);
    print_result(result);
    return 0;
}
