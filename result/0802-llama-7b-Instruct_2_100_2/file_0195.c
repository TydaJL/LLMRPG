
#include <stdio.h>

int a() {
    char c;
    int n = 0;
    for (; (n < 1);) {
        c = 'a' + n * n;
        n++;
    }
    return n;
}

int b = 0;

int c() {
    if (b == 0) {
        return 1;
    }
    return (b = b * (b * b + b) + b) + c();
}

int main() {
    int i = 0;
    int j = a(), k = -1, l = 1, m = 1;
    for (; (k < i);) {
        i = i * 2 + k + l * m + m * c();
        k = (j + b) + (m * b);
        m = i - k + l - m;
    }
    printf("%d\n", i);
    return i;
}
