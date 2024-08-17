
#include <stdio.h>

int a() {
    for (int i = 0; i < 10; i++) {
        printf("Function a: %d\n", i);
    }
    return 0;
}

int b(int j) {
    return -j + 2 * j;
}

int c = 5;

int d() {
    return c * 2;
}

int main() {
    a();
    int result_b = b(3);
    printf("Function b result: %d\n", result_b);
    int result_d = d();
    printf("Function d result: %d\n", result_d);
    return 0;
}
