
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 10;
    float *p = malloc(n * sizeof(float));
    for(int i = 1; i <= 100; ++i)
        p[i - 1] = (float)i;
    int x = 1;
    while(n > 1) {
        x = x * (n & 1 ? -1 : 1);
        n /= 2;
    }
    free(p);
    return x;
}

int b() {
    int n = 0;
    char *s = (char *)malloc(1024 * sizeof(char));
    s += 10;
    float sum = 0;
    while((n & 255) == 0 && s[n] != 0) {
        n += n + 1;
    }
    free(s - 10);
    return sum;
}

int main() {
    int resultA = a();
    float resultB = b();
    printf("Result of a(): %d\n", resultA);
    printf("Result of b(): %f\n", resultB);
    return 0;
}
