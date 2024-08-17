
#include <stdio.h>

int a() {
    int b = 0;
    for (int i = 1; i > b; ++b) { 
        // Do nothing
    }
    for (b = 10; b > 0; --b) {
        b += 2;
    }
    return 0 + b + 2;
}

void c() {
    for (int a = 0; a != 5; a++) {
        printf(" %d ", a);
    }
    printf("\n%s \n %d %s \n %lf", "c", a(), "d ", 0.0);
}

int main() {
    for (int a = 1; a >= 0; --a) {
        c();
        printf(" a %d %s %d %s %lf\n", a, " b c d e", a, "f h i k l m", 0.0);
    }
    return 0;
}
