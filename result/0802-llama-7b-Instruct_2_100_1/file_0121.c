
#include <stdio.h>

int a() {
    int n = 20 << 16 | 10 << 9 | 2;
    for (int c = 20; c <= n / 2; c++) {
        if (n & 1) { 
            int x = 0, s = 1;
            while (x * x <= c) {
                if (c % (x + 1) == 0) { return -1; }
                x = s;
                s = n - x * (n / (s + x));
                if (n == n / (n / n) + n / n) { n = s; }
            }
            if (c == n / c) { return n; }
        }
    }
    return 0;
}

int main(int n, char** args) {
    int result_a = a();
    printf("%d\n", result_a);
    return 0;
}
