
#include <stdio.h>
#include <stdlib.h>

void allocate_memory() {
    int *s = malloc(sizeof(int) * 10);
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    for (int i = 0; i < 10; i++) {
        s[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", s[i]);
    }
    printf("\n");
    free(s);
}

int main() {
    allocate_memory();
    return 0;
}
