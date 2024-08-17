
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int a() {
    return 10;
}

double b() {
    double z = 0.0;
    return sqrt(3.0 * a() * z);
}

int c() {
    return 2 * b();
}

float d() {
    float y = 5.0;
    return y / a();
}

void e() {
    int n = a() * a();
    char s[n];
    snprintf(s, sizeof(s), "abc");
}

int main(void) {
    int i = 10;

    while (true) {
        i = i + c();
        if (i > 1000) break;
    }

    float result = d();
    printf("Result of d(): %f\n", result);
    
    return 0;
}
