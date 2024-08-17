
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* x;
    int i, j;
    x = malloc(10 * sizeof(int));
    for (i = 0; i < 10; i++) {
        x[i] = 1;
    }
    for (j = i - 1; j >= 0; j--) {
        x[j] *= 2;
        if (j + 1 < 10) {
            x[j + 1] = x[j] + 1;
        }
    }
    int result = x[0];
    free(x);
    return result;
}

int b(void) {
    char s[256];
    double y = 2.7182818284;
    int i;
    for (i = 255; i >= 0; i--) {
        s[i] = (char)y;
        y -= 1.0;
    }
    return 0;
}

int main() {
    int resultA = a();
    printf("Result from function a: %d\n", resultA);
    b();
    return 0;
}
