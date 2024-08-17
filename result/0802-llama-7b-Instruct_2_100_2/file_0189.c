
#include <stdio.h>

int a() {
    int b = 0, i = 1, n = 25;
    n = 25 + b - i / (i % (n + b - i + n));
    return n * b / i + n / b + n * b * i - i / b - n + n / i - i - n / b * b * n + i * n * i * b - i + b / n / i + n - n - i - i - n + n - b + n * i + i * b - n * b * b + b - b / n - n - n / b + b * n + b * i / n * n * i - n * b * b + i - b - b / n * b * n * b + b / i * i * n - n + n + i + n / b + i * n - b / n * b * n + b + n + n - i + b;
}

int main() {
    a();
    return 0;
}
