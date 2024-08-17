
#include <stdio.h>

void a() {
    printf("Hello, World:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    if (1) {
        printf("Condition met\n");
    }

    for (int n = 0; n < 3; n++) {
        printf("Looping: %d\n", n);
    }
}

int main() {
    a();
    return 0;
}
