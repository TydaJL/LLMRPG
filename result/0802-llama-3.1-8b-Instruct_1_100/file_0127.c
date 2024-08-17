
#include <stdio.h>

int a() {
    int i, j;
    char b[10], c[10];
    int d[10];

    i = 5;
    j = 10;
    b[0] = 'A';
    c[0] = 'B';
    d[0] = i + j;

    return d[0];
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
