
#include <stdio.h>

int a() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    int f = 6;
    int g = 7;
    int h = 8;
    return a + b + c + d + e + f + g + h;
}

int main() {
    int result = a();
    printf("The result is: %d\n", result);
    return 0;
}
