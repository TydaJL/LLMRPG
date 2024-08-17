
#include <stdio.h>

int a1() {
    int x = 5;
    int y = 3 * x - 5;
    return 10 / x * y - x;
}

int a2() {
    int z = -a1();
    int x = 5;
    for (int i = 0; ++i != x;);
    if (a1() < x) {
        while (--x);
    }
    return a1();
}

float b() {
    return 3.14f;
}

char c[] = "This is C!";
double d = 2.0;

double f(int e) {
    double f = 1.0;
    do {
        f += b();
        f *= e / f + d;
        e *= f;
    } while (f != e && f != e * d);
    return e * d;
}

double f2() {
    return 42.0;
}

int main() {
    int resultA1 = a1();
    int resultA2 = a2();
    float resultB = b();
    double resultF = f(5);
    
    printf("Result of a1: %d\n", resultA1);
    printf("Result of a2: %d\n", resultA2);
    printf("Result of b: %f\n", resultB);
    printf("Result of f: %f\n", resultF);
    
    return 0;
}
