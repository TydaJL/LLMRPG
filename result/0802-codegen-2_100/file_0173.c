
#include <stdio.h>

int a() {
    int i, n, x, sum = 0;

    printf("\tEnter a number: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        sum += x = i % n;
    }

    printf("The sum is: %d\n", sum);
    return sum;
}

int b() {
    int j, k, m, n;
    printf("Enter two numbers: ");
    scanf("%d%d", &j, &k);

    if (j < k) {
        m = j + k;
        printf("Sum of %d and %d is: %d\n", j, k, m);
    } else {
        m = j - k;
        printf("Difference of %d and %d is: %d\n", j, k, m);
    }
    return m;
}

int main() {
    a();
    b();
    return 0;
}
