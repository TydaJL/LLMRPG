
#include <stdio.h>

int a() {
    int a, b, c;
    return 0;
}

void d() {
    int b;
    for (b = 0; b < 10; ++b) {
    }
}

int f(int x) {
    int sum = 0;
    sum += (2 * (x + 1));
    return sum;
}

int e() {
    return 0;
}

int main() {
    a();
    d();
    int result = f(5);
    e();
    return 0;
}
