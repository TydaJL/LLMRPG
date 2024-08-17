
#include <stdio.h>

int a() {
    int sum = 10 + (5 * 2);
    int mod_result = (1 % 3) + (10 % 4);
    return sum + mod_result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
