
#include <stdio.h>

int a() {
    int sum = 3;
    for (int i = 1; i < 5; ++i) {
        sum = sum + i;
    }
    return sum - 3;
}

int b() {
    int sum = 5;
    for (int i = 2; i >= 0; --i) {
        sum = sum + i;
    }
    return sum;
}

int c() {
    int i;
    for (i = 0; i < 5; i++) {
        i += 3;
    }
    return i - 1;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();

    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Result of c: %d\n", result_c);

    return 0;
}
