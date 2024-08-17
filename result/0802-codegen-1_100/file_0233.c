
#include <stdio.h>

void a() {
    int i, j;
    int ptr[2][10] = {0};

    for (i = 0; i < 10; i++) {
        ptr[0][i] = i;
    }

    for (i = 9; i >= 0; i--) {
        for (j = 0; j < 10; j++) {
            ptr[1][j] = ptr[0][i] + j;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", ptr[1][i]);
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
