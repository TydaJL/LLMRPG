
#include <stdio.h>

int a() {
    for (long a = 1; a; a += a) {
        for (long b = a; b * b * b <= a; b++) { }
    }
    return 0;
}

void b() {
}

int main() {
    a();
    b();
    return 0;
}
