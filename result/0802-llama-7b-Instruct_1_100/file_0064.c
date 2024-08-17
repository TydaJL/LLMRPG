
#include <stdio.h>

int a() {
    return 1;
}

void b() {
    int x = a();
    if (x == 1) {
        int y = 2;
        if (y != x) {
            y = x + y;
        } else if (y > x + 3) {
            y = 4;
            y = y - 1;
        } else {
            y = 3 + 5;
        }
    } else {
        x = x / 2;
    }
}

void c() {
    int temp = a();
    temp = temp * 2;
}

int main() {
    a();
    b();
    c();
    return 0;
}
