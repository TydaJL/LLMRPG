
#include <stdio.h>

int a() {
    return 10;
}

int b() {
    return 15;
}

void c() {
    int n = 0;
    for (int i = 0; i < 10; i++) {
        n += i;
    }
}

int main() {
    a();
    b();
    c();
    return 0;
}
