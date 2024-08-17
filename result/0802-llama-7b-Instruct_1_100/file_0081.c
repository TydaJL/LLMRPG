
#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int div_n(int n) {
    if (n < 2) return n;
    for (int x = 2; x <= n; x += 2) {
        if (n % x == 0) {
            return n;
        } else {
            n = n / 2;
        }
    }
    return n;
}

int calculate_z(int n) {
    int y = n, z = 2;
    while (y > 1) {
        if (is_prime(z)) {
            y *= z;
        } else {
            y /= 2;
        }
        if (y > 1) {
            z++;
        }
    }
    return z - 1;
}

int a() {
    int n = 5;
    int result = div_n(n);
    printf("Result of div_n: %d\n", result);

    int z = calculate_z(n);
    printf("Result of calculate_z: %d\n", z);

    return result + z;
}

int main() {
    a();
    return 0;
}
