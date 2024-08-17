
#include <stdio.h>

int a() {
    return 1 + 3;
}

int main() {
    int a_value = 0;
    int b = (a_value + a()) / 4;
    printf("%d\n", a_value / (b ? b : 1));
    int i = a() + b + (int)sizeof(float);
    int j = sizeof(char) / a() + (a_value ? a_value / sizeof(short) : 0) - 2;
    int c = sizeof(float);
    printf("%lu\n", sizeof(a_value));
    int e = i + j + a() + c / sizeof(char) * b + (j ? e : 0);
    printf("%lu\n", sizeof(i));
    printf("%d\n", j ? i / j : 0);
    printf("%d\n", j ? j / a() : 0);
    int k = sizeof(int);
    int l = (b ? b / k : 0) + (j ? j / a() : 0) + a() / k;
    return j ? j / k : 0;
}
