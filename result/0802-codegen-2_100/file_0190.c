
#include <stdio.h>

int a() {
    char c1, c2;
    for (int i = 0; i < 100; ++i) {
        if (i == 5) {
            c1 = 'A'; 
            c2 = (char)(i + 5);
            printf("%c %c\n", c1, c2);
            return 0;
        }
    }
    return -1;
}

void b() {
    int a = 0, b;
    for (b = 100; b >= 0; --b) {
        if (a == 10) {
            printf("\n\n%d\t", a);
            return;
        }
        if (b < 5) {
            a += b;
        }
    }
}

int main() {
    a();
    b();
    return 0;
}
