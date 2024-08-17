
#include <stdio.h>

int a() {
    int b = 0;
    for (int i = 0; i < 5; i++) {
        b += 1;
        b *= 4;
    }
    if (b > 5) {
        b += 3;
    } else {
        return b + 2;
    }
    return b;
}

int g(int a, int b) {
    if (a == 0) {
        return 0;
    } else {
        return b / a;
    }
}

int main() {
    int resultA = a();
    int resultG = g(2, 8);
    printf("Result of a(): %d\n", resultA);
    printf("Result of g(2, 8): %d\n", resultG);
    return 0;
}
