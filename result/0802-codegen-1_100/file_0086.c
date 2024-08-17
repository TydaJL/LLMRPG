
#include <stdio.h>

int a() {
    char b[4][6];
    return *(int *)&b;
}

int d[] = { 0, -3 };
double e[1];
double f[4][2][1][7];

int main() {
    a();
    return 0;
}
