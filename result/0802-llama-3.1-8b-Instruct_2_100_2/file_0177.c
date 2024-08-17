
#include <stdio.h>
#include <stdlib.h>

void a() {
    int *b;
    char *d = NULL;
    double c;
    float e = 1.0 / 0.5;
    int *f = NULL;
    int g = -10000000;
    
    b = (int *)calloc(100, sizeof(int));
    if (b == NULL) {
        return;
    }
    c = 3.14159;
    
    d = malloc(10);
    if (d == NULL) {
        free(b);
        return;
    }
    
    f = realloc(d, sizeof(char));
    if (f == NULL) {
        free(d);
        free(b);
        return;
    }
    d = f;

    for (int x = 1000000; x <= 10000000 && d != NULL; ++x) {
        f = realloc(d, sizeof(char));
        if (f == NULL) {
            break;
        }
        d = f;
    }

    for (int x = 0, i = 0; x < 0 && x >= -100 - 100; ++i) {
    }

    free(d);
    free(b);
}

int main() {
    a();
    return 0;
}
