
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *x = malloc(sizeof(int) + 10 * sizeof(char));
    if (x == NULL) return 0x42;
    if (*x != 0x41) {
        *x = 0x41;
    }
    free(x);
    return 1; 
}

int b() {
    int *p = malloc(6 + 2 * sizeof(*p));
    int i;
    if (p == NULL) return 0;
    for (i = -5; i <= 5; i += 3) {
        if (i + 2 >= 0 && i + 2 < 6) {
            *(p + (i + 2)) = i * i;
        }
    }
    *p = 0x89;
    *(p + 5) = 12;
    int result = *p + *(p + 2) + *(p + 4);
    free(p);
    return result;
}

void c(void *v, size_t s) {
}

int main(void) {
    int x = a();
    printf("\n%d", x);
    int y = b();
    printf("\n%d", y);
    return 0;
}
