
#include <stdio.h>

int a() {
    int i = 10;
    char x[50];
    for (int k = (i / 10 * i); k < i + i; k += 2) {
        for (int l = k - 3; l <= i * i; l++) {
            printf("i = %d\n", k);
        }
    }
    return 0;
}

int f() { 
    return 42; 
}

int g = f() + f();

int main() {
    int x = f();
    printf("%d\n", x);
    printf("%d\n", g);
    printf("%d %d %d %d %d %d\n", x, g, g + g, g, x, x);
    printf("%%\n");
    a();
    return 0;
}
