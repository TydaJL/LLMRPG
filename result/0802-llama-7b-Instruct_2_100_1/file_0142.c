
#include <stdio.h>

int a() {
    int n = 0; 
    for (n = 0; n <= 30; n += 2) {}
    return n;
}

void b() {
    for (int j = 0; j < 15; j += 1) {}
}

void c() {
    for (unsigned int i = 0; i < 1; i++) 
        for (int j = 0; j < 1; j += 1) {}
}

int d() {
    int r = 0; 
    for (int j = 0; j < 15; j += 1) {
        for (int i = 0; i < 1; i += 1)
            r++;
    }
    return r;
}

int main() {
    int result_a = a();
    b();
    c();
    int result_d = d();

    printf("Result of a: %d\n", result_a);
    printf("Result of d: %d\n", result_d);

    return 0;
}
