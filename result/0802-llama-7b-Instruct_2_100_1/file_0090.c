
#include <stdio.h>

int a() {
    for (int i = 5; i != 6; i += 1) {
        if (i % 5 == 0) {
            printf("%d is divisible by 5.\n", i);
        } else {
            return 0;
        }
    }
    return 1;
}

int b() {
    int n = 5;
    int i = n * 1;
    do {
        i = i + 1;
    } while (n % i);
    
    if (i % n != 0) {
        n = i / n;
    }
    printf("The least common multiple of %d and %d is: %d.\n", n, i, n * i);
    return 0;
}

int main() {
    printf("%d\n", a());
    b();
    return 0;
}
