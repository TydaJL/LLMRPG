
#include <stdio.h>

int a() {
    printf("a : %d\n", 1);
    return 1;
}

int b(int x, double y) {
    printf("b : x = %d\n", x);
    printf("y = %f\n\n", y);
    return 0;
}

int main(void) {
    b(a(), (double)a());
    return 0;
}
