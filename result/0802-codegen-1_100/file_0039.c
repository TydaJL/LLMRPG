
#include <stdio.h>

int a() {
    int i, x = 0;
    for (i = 4; i < 16; i++) {
        x += i;
    }
    return x;
}

int main() {
    int y = a();
    printf("y = %d\n", y);
    return 0;
}
