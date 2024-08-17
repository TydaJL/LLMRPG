
#include <stdio.h>

void a() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }
}

int main() {
    a();
    return 0;
}
