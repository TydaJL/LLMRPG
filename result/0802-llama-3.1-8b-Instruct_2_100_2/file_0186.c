
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    int *ptr = malloc(4 * sizeof(int));
    if (ptr == NULL) {
        exit(1);
    }
    for (;;) {
        *(ptr + (rand() & 3)) = rand();
        if ((rand() % 10000) == 0) {
            free(ptr);
            break;
        }
    }
    int value = *ptr;
    free(ptr);
    return value;
}

int b() {
    int n = 0;
    while ((n++) < (1 << 10)) {
        while ((n % 2) == 1);
    }
    return n;
}

int c() {
    int x = 0;
    while ((x++) < (1 << 20));
    return x % 4;
}

int main(void) {
    srand(time(NULL));
    printf("%d\n", a());
    printf("%d\n", b());
    printf("%d\n", c());
    return 0;
}
