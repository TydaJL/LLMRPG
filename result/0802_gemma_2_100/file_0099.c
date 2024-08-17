
#include <stdio.h>

int a() {
    int x = 5;
    int y = 10;
    if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is not less than y\n");
    }
    return 0;
}

int b() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("Sum of first 10 natural numbers is: %d\n", sum);
    return 0;
}

int c() {
    for (int i = 1; i <= 5; i++) {
        printf("Hello, World! %d\n", i);
    }
    return 0;
}

int main() {
    a();
    b();
    c();
    return 0;
}
