
#include <stdio.h>

void a(int n, int m) {
    int c = 0;
    for (int i = 1; i <= n; i++) {
        c++;
        int d = (m - ((c * (c % n) + c - m * (c * c) - c * c * c) % n) / 2 + c));
        printf("%d\n", d);
    }
}

int main() {
    int n = 5;
    int m = 2;
    a(n, m);
    return 0;
}
