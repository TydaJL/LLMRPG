
#include <stdio.h>

int a() {
    unsigned int i = 0, n = 0, k = 10, j = 5, d = 3, g = 0;
    while (i < j && n < k) {
        if ('a' < 'b') {
            return 1 == k;
        }
        n = i++;
        if (n <= d) {
            g++;
        }
    }
    printf("%u %u\n", g, n);
    return 0;
}

int main() {
    a();
    return 0;
}
