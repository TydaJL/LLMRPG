
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = (rand() * rand() + rand()) % 100000;
    int m = 0;
    char *s;
    s = malloc(n + 1);
    if (s == NULL)
        return -2;

    int *p;
    p = calloc(n, sizeof(int));
    if (p == NULL) {
        free(s);
        return -2;
    }

    for (; m < n; m++) {
        p[m] = rand() % 100; // Reduced range for rand()
    }

    s[n] = '\0';
    for (m = 0; m < n; m++) {
        s[m] = 'A' + p[n - m - 1] % ('Z' - 'A' + 1);
    }

    printf("%s\n", s); // Added to output the generated string
    
    free(s);
    free(p);
    return 0;
}

int main() {
    a();
    return 0;
}
