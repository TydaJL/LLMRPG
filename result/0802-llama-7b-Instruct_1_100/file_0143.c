
#include <stdio.h>

void a() {
    int i = -1, j = 1;
    while (1) {
        j = j + 1;
        if (j > 5) break;
    }
}

void b() {
    int i = 1, j = 0;
    while (i < 5) {
        j += 1;
        i += 1;
    }
}

int main() {
    a();
    b();
    return 0;
}
