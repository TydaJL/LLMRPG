
#include <stdio.h>

void a() {
    int b = 0;
    for (int i = 0; i < 10; i++) {
        b += i;
    }
    printf("Sum: %d\n", b);
}

int main() {
    a();
    return 0;
}
