
#include <stdio.h>

int a() {
    int a = 1, b[10];
    for (;;) {
        for (int c = 1, j = 0; j <= 9; j++) {
            b[j] = a + c;
        }
        break;
    }
    return 0;
}

int b(int x) {
    int y = 0, z;
    if (x > 2)
        return 1;
    else if (x == 1) {
        z = 2;
    } else if (x == 0) {
        y = 4;
    }
    return y;
}

int main() {
    a();
    int result = b(2);
    printf("Result of b(2): %d\n", result);
    return 0;
}
