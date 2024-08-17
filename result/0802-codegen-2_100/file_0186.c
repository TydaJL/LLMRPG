
#include <stdio.h>

void a() {
    printf("In function A.\n");

    int a[2] = {10, 11};
    long b[2] = {12, 13};
    double c[2][2] = {{16, 17}, {18, 0}};
    double d = 20.5;
    int e = 21;
    int f[3] = {22, 23, 0};
    char *g[3] = {"24", "25", NULL};
    char h[2] = {26, 27};
    double i[3] = {28, 29, 0};
    int j = 31;
    int k[2][3] = {{32, 33, 0}, {0, 0, 0}};
}

int main() {
    a();
    return 0;
}
