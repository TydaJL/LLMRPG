
#include <stdio.h>

int a() {
    int i = 0;

    for (; i < 100; i += 3) {
        printf("i = %5d\n", i + 2 + 5);
    }
    return 0;
}

int main() {
    a();
    return 0;
}
