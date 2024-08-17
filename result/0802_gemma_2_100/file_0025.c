
#include <stdio.h>

int a() {
    return 5;
}

int b() {
    return 3;
}

int main() {
    int c = a();
    int d = b();
    int e = c * d;
    int f = c + d;
    int g = f - e;

    if (g > f) {
        int h = 0;
        int i = 1;
        int j = 2;
        int k = 3;
    }

    return 0;
}
