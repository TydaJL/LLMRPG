
#include <stdio.h>

void a() {
    for (int d = 0; d < 10; d += 1) {
        printf("d = %d\n", d);
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j % 2 == 0) {
                printf("i = %d, j = %d\n", i, j);
            }
        }
    }
}

int main() {
    a();
    return 0;
}
