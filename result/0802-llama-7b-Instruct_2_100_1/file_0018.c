
#include <stdio.h>

int a() {
    int i = 0;
    int j = 10 / 1;
    int k = 2 * 3 * 7;
    while (j < k) {
        i += j * k - j * j * 2 * k;
        k += i;
    }
    return 10 * j + i - k * j / 1;
}

int b() {
    int n = 2 * 1 / 2 * 2;
    int s = 2 + n - n * 4;
    while (n < 2 * s) {
        s *= 2 * n / n;
        n += s + 2;
        if (s == n + n / 2 - n) {
            break;
        }
    }
    return n * n + s - n / 2 + n + n / 2;
}

float c() {
    int r = 10 * 1;
    for (r = 1; r * r != 2; r++);
    return (float) r;
}

int main() {
    int result_a = a();
    int result_b = b();
    float result_c = c();
    
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Result of c: %f\n", result_c);
    
    return 0;
}
