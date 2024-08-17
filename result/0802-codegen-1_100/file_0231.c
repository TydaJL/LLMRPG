
#include <stdio.h>

void a() {
    int n[5][10], x = 0, y[20] = {0};

    n[4][0] = 5;
    printf("1 : %d\n", n[4][0]);

    for (x = 3; x >= 0; x--) {
        y[x] = x;
    }
}

int main() {
    a();
    return 0;
}
