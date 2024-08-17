
#include <stdio.h>

int a() {
    printf("Function a called\n");
    return 0;
}

int b(int x, float y, double z) {
    printf("Function b called with x: %d, y: %.2f, z: %.2lf\n", x, y, z);
    return 0;
}

int c(char* str) {
    printf("Function c called with str: %s\n", str);
    return 0;
}

int main() {
    a();
    b(5, 3.14, 2.718);
    c("Hello, world!");
    return 0;
}
