
#include <stdio.h>
#include <stdlib.h>

void a() {
    int i = 0;
    int *p = (int *)malloc(sizeof(int) * 1000);
    if (p == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }

    for (; i < 1000; i++) {
        p[i] = i;
        if (i % 100 == 0 && i != 0) {
            int *temp = realloc(p, sizeof(int) * 2000);
            if (temp == NULL) {
                perror("Failed to reallocate memory");
                free(p);
                exit(EXIT_FAILURE);
            }
            p = temp;
        }
    }

    for (i = 1; i < 1000; i *= 10) {
        for (int x = 1, y = i - 2; x <= y; x++) {
            for (int j = 0; j < 1; j++) {
                p[x] = x;
                while (p[x] == x && y > 0) {
                    y--;
                }
            }
        }
    }

    free(p);
}

int main() {
    a();
    return 0;
}
