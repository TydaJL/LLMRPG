
#include <stdio.h>
#include <stdlib.h>

void a() {
    float *b = malloc(10 * sizeof(float));
    if (b == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    int n;
    for (n = 0; n < 10; n++) {
        b[n] = (float)(n * (3.0 / 1.2 * n - (4 - 5) + n * (3.0 * 0.5)));
    }
    for (n = 0; n < 10; n++) {
        printf("%f\n", b[n]);
    }
    free(b);
}

int main() {
    a();
    return 0;
}
