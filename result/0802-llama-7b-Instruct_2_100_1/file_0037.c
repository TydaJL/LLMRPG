
#include <stdio.h>

int a() {
    int x, i;
    long long b[10] = {0}; 
    long long d = 10;
    long long f[15] = {0};

    for (i = 2; i < 10; i++) {
        d += f[0] + f[0] + i * i; 
        f[i + 1] += d * d; 
        d = d - (i + 3 < 15 ? f[i + 3] : 0) * d * d * f[0] + d * f[0] + f[i] + f[0] + i + f[0] + i * f[0] + d + i;
    }

    x = b[i - 2 + i] + b[0] + b[0] + d - f[0] + d - i + d;
    return x;
}

int main() {
    a();
    return 0;
}
