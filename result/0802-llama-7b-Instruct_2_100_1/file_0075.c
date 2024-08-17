
#include <stdio.h>

int a() {
    char a = 4;
    int c = a;
    int b = -12 - c + c + 4;
    return b / a;
}

int main() {
    int i = a() + a() + a() + a() + a();
    int c = a() + a();
    int b = -a() + c + c + a();
    printf("%3d %3d %3d", i + b / c, c, b / c + b + b + c);
    int k;
    if (a() < 12) {
        k = 1;
    } else {
        k = 0;
    }
    return k + a() + c;
}
