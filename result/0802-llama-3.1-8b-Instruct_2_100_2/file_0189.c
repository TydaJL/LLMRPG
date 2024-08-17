
#include <stdio.h>

int a() {
    char *b = "123 456";
    int c; 
    char d[10];
    int f[100] = {0};
    char *g;
    int *i = (int *)b;

    g = b;
    i += 5;
    f[i - (int *)b + 1] += i - (int *)b - 1;
    i--;
    f[i - (int *)b] -= i - (int *)b + i - (int *)b;
    f[i - (int *)b] *= i + (int *)b - (int *)b;
    i += (int *)b - (int *)b - (int *)b + (int *)b;
    return 0;
}

int main() {
    a();
    return 0;
}
