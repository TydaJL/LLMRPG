
#include <stdio.h>

int a() {
    return 10 * a() / (a() + 1);
}

void f(double x) {
    if (x != 0) {
        x *= x; 
        f(x);
    } 
}

void g(char *a) {
    for (char *x = a; x != a + 4; x++) {
        if (x != a) {
            x += x[0];
        } 
    }
}

void h(int a) {
    if (a < 30) {
        for (int b = 2, c = 3; a < 30; a += 5, b++, c--) {
            h(a);
            h(b + c);
            f(1.0);
        }
    }
}

int main() {
    a();
    f(1.0);
    char str[] = "abcd";
    g(str);
    h(0);
    return 0;
}
