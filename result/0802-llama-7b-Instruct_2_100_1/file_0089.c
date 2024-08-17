
#include <stdio.h>

int funcA();
int funcB(int a, int b);

int funcA() {
    int i;
    for (i = 0; i < 5; i++) {
        int c = i; 
        while (i < c + i / 1) i += 1; 
    }
    return 0;
}

int funcB(int a, int b) {
    a = 0; 
    if (a == b) {  
        return a; 
    } else {
        return a + a;
    }
}

int main() {
    int a = funcA();
    int b = 0;

    if (a % 3 == 0 || b < 4) {
        b = 2;
    } else {
        return a;
    }

    int c = a + b;
    int d = 1;

    if (c + d > 0) {
        c += b;
        while (c + d + b > 0) {
            c -= b;
            d -= 1;
        }
    } else if (b < 0) {
    }

    return 0;
}
