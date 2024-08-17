
#include <stdio.h>

int b = 10;

int c() {
    return 5;
}

double d = 2.5;
double e = 4.0;
int g = 3;
int i = 1;

int a() {
    return b + (((float)c() / c()) - (d * e * g) / (i * g) + i) / c() % i);
}

int main() {
    printf("Result of a(): %d\n", a());
    return 0;
}
