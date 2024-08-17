
#include <stdio.h>

int a() {
    int x = 0;
    return x;
}

int b(int a, int b) {
    return a + b;
}

int c(int a, int b, int c) {
    return a * b * c;
}

int d(int a, int b, int c, int d) {
    return a - b + c * d;
}

int e(int a, int b, int c, int d, int e) {
    return a / (b + 1) + c - d + e;
}

int main() {
    int val_a = a();
    int val_b = b(5, 3);
    int val_c = c(2, 3, 4);
    int val_d = d(10, 5, 2, 1);
    int val_e = e(20, 5, 3, 2, 1);

    printf("a() = %d\n", val_a);
    printf("b(5, 3) = %d\n", val_b);
    printf("c(2, 3, 4) = %d\n", val_c);
    printf("d(10, 5, 2, 1) = %d\n", val_d);
    printf("e(20, 5, 3, 2, 1) = %d\n", val_e);

    return 0;
}
