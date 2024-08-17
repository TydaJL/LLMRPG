
#include <stdio.h>

int a() {
    int i;
    i = 1;

    for (i = 1; i < 100; ++i) {
        i += 2;
    }

    return 0;
}

int main() {
    int x, y;

    for (x = 0; x < 100; x++) {
        for (y = 0; y < 100; y += 2) {
        }
    }

    a();
    return 0;
}
