
#include <stdio.h>

int a() {
    int a = 0;
    for (int j = a - 3; j > 3; j--) {
        if (a == 4) {
            a += a + 3;
            return a;
        }
    }
    for (int i = 0; a == 0 && i < 3; i++) {
        if (a == 2) {
            a = a * a;
            return a;
        } else {
            a += 1;
            if (a == 1) {
                a *= 3;
                a -= 5;
                for (int l = a - 5; a == 6 && l < 6; l++) {
                    a = a + a + a - 5;
                    a *= a;
                    a = a + a;
                }
            } else {
                a = 0;
            }
        }
    }
    return a;
}

int main() {
    int result = a();
    if (result == 3) {
        printf("3");
    } else {
        result += 3;
    }
    for (int a = result; a <= 7; a++) {
        printf("\n%d", a);
    }
    return 0;
}
