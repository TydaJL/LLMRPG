
#include <stdio.h>

int a() {
    int x, i;
    for (i = 0; i < 10; i++) {
        x = i * 2;
        printf("%d\n", x);
    }
    return 0;
}

int main() {
    a();
    return 0;
}
