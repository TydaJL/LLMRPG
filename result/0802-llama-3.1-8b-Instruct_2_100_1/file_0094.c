
#include <stdio.h>

int a() {
    return 1;
}

int f(int n) {
    if (n == 0) return 1;
    return n * f(n - 1);
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int x = f(10);
    printf("%d\n", a());
    printf("Factorial of 10 is: %d\n", x);
    printf("Fibonacci of 5 is: %d\n", fib(5));
    return 0;
}
