
#include <stdio.h>

void a() {
    int b;
    int c[3][3] = {0, 1, 0, 0, 2, 0, 1, 0, 0};
    for (b = 0; b < 10; ++b) {
        printf("Hello World\n");
        c[2][2] = c[2][2] + c[2][2];
    }
}

int main() {
    a();
    return 0;
}
