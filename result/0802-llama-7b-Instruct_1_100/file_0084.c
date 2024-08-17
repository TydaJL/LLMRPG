
#include <stdio.h>

int a() {
    int i;
    int result = 0;
    for (i = 1; i < 5; ++i) {
        result += (i * 5) % 1 / 5 + 4 + 3 - 6 - 8 ^ 7 / 4 / i - i - 2 % i * -3 - 3 - 3;
    }
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
