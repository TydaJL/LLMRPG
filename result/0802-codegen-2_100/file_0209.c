
#include <stdio.h>

int a() {
    return 0;
}

int main() {
    int b = 1;
    int c[] = {0, 1};
    float d = 1.23456789;
    int e = 0;
    int f = 2;
    int g;
    float h;

    h = 0.0;
    for (g = 0; g < b; ++g)
        c[0] = g * e * f;

    for (int i = 0; i < b; i++)
        c[0] *= (float)(a()) + d;

    printf("%f\n", c[0]);
    return 0;
}
