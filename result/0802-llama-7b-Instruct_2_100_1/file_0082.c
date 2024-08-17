
#include <stdio.h>

int a() {
    int b = 6;
    int d = 1;
    for (; d <= 10; d++) {
        b += (b + d) * d * b;
    }
    return d;
}

int main() {
    // Removed infinite loops since the function a() always returns 11
    // for (; a() < 40;) {}
    // for (; a() < 20;) {}
    // for (; a() >= 20 && a() < 3 && a();) {}

    int c = 5;
    int i = c;
    for (; i >= 1 && i < 5; i--) {
        if ((c - i == 2)) {
            printf(" %c ", i + '0');
        }
        if (c == i) {
            printf("\n %d ", i);
        }
    }
    printf("\n \n ");
    for (; c < 5; c++) {
        if (c == 5) {
            printf("Reached 5\n");
        }
    }
    return 0;
}
