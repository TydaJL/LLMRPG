
#include <stdio.h>

void a() {
    double sum = 0.00000;
    for (int i = 1; i <= 100; i++) {
        double temp = (double)i / i;
        sum = sum + temp;
    }
    printf("%f\n", sum);
}

void b() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for (int j = 0; j < 10; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    a();
    b();
    printf("GCD of 12 and 8: %d\n", gcd(12, 8));
    return 0;
}
