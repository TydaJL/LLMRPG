
#include <stdio.h>

void a() {
    float x = 2;
    printf("a x = %g (%d), x = %f\n", x, (int)x, x);
    printf("numbers of a\n");
}

int main() {
    a();
    return 0;
}
