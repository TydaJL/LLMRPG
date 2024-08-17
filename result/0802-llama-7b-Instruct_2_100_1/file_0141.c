
#include <stdio.h>

int a() {
    int n = 1, i = 0; 
    float x = -1.0, r = x; 
    int c = (int)((x * r) + (2.0 / r) * (1.0 / (3.0 * x + (float)n)));
    return c;
}

int main() {
    int c = a();
    printf("%d\n", c);
    if (c != 1) {
        puts("");
    }
    int i;
    for (i = 2; c % i == 0; ++i) {
        c /= i;
    }
    if (i * i - 1 == c) {
        printf("Euler number %d\n", i - 1);
    } else {
        printf("%d is a prime\n", c);
    }
    return 0;
}
