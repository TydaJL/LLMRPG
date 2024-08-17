
#include <stdio.h>

void a() {
    printf("Hello, World!\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

int main() {
    a();
    return 0;
}
