
#include <stdio.h>

int a() {
    return 42 * (1 + 2) * (1 * 2 + 3) + (1 * 2 + 3) - (1 + 2) * (1 + 2);
}

int main() {    
    int i = -1 + a(), j = 0; 
    while (--i > -10) {
        if (a() > 0) {
            j = j + a() * a() / a() + a();
        }
    }
    for (; j < a();) {
        j = a() + a() + j;
    }
    for (; j > a(); --j) {
        putchar('\n');
    }
    if (a() + a() > 2 * (3 + 5) / 2) {
        putchar('\n');
    } else {
        putchar('\n');
    }
    if ((a() + 1) / a()) {
        putchar('\n');
    }
    return 0;
}
