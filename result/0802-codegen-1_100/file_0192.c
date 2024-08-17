
#include <stdio.h>

void a() {
    for (int i = 0; i < 10; i++) {
        printf("n = %d\n", i);
        if (i % 4 == 0) {
            printf("%d is divisible by 4\n", i);
        }
        if (i % 3 == 0) {
            printf("%d is divisible by 3\n", i);
        }
    }
}

int main() {
    a();
    return 0;
}
