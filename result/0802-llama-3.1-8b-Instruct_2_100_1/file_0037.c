
#include <stdio.h>
#include <stdlib.h>

int a() {
    int sum = 0;
    for (int i = 100; i < 2000; i++) {
        int *b = (int *)malloc((i - 99) * sizeof(int));
        if (b == NULL) {
            perror("Failed to allocate memory");
            exit(EXIT_FAILURE);
        }
        for (int k = 0; k < (i - 99); k++) {
            b[k] = rand() % 100;
        }
        for (int k = 0; k < (i - 99); k++) {
            sum += b[k];
        }
        free(b);
    }
    return sum;
}

int main() {
    int result = a();
    printf("Sum: %d\n", result);
    return 0;
}
