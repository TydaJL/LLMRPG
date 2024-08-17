
#include <stdio.h>

int a() {
    return 10 + 5 * 3 - 2 / 10 - (20 * (10 % 3 + 3) / (3 - ((10 % 3 + 10) / 3 - ((3 + 5) % 10) / 2) * 10) + 2) / 20);
}

int b() {
    return a();
}

int c(int x, int k) {
    if (x != k) {
        int result = b();
        return result + b();
    } else {
        return 0;
    }
}

int d() {
    int x = -1, k = a();
    if (a() == a()) {
        return 1;
    }
    return 0;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c(1, 2);
    int result_d = d();
    
    printf("a() = %d\n", result_a);
    printf("b() = %d\n", result_b);
    printf("c(1, 2) = %d\n", result_c);
    printf("d() = %d\n", result_d);
    
    return 0;
}
