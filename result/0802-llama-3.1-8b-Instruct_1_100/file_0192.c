
#include <stdio.h>

int a() {
    int b = 0;
    int c = 0;
    int d = 0;
    int e[10];
    for (int f = 0; f < 10; f++) {
        e[f] = f * 2;
    }
    return e[0];
}

int main() {
    printf("%d\n", a());
    return 0;
}
