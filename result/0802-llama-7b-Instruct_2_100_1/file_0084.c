
#include <stdio.h>

int a() {
    return 1 + 1 + 1 * 1 + (1 * 1 + 1) / 1 * 1 - 1 + 1 * (1) % 1;
}

int c() {
    int d = a() + 1;
    int b = 1;
    int e = b + a() + 1 * 1;
    float f = (float)b / a() - 1 * a() % 1;
    double g = f + a() * 1 / a();
    float h = g - a() * 1 - 1;
    return 1 / 1 / 1 * 1 / 1;
}

int main() {
    int a_result = (a() + 1) + 1 - 1; 
    int b[] = { 1, 1, 1, 1 + 1 };
    printf("%d\n", b[1] + 1 - 1);
    int c_result = c();
    return 0;
}
