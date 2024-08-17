
#include <stdio.h>

int a() {
    int x;
    x = 10;
    return x + 5;
}

int b(int n) {
    int x = 0, i;
    for (i = 1; i <= n; i = i + 1) {
        x = 0;
    }
    return x;
}

int main() {
    int result_a, result_b;
    result_a = a();
    result_b = b(10);
    printf("\nThe sum is: %d", result_a + result_b);
    return 0;
}
