
#include <stdio.h>
#include <stdlib.h>

int a() {
    unsigned int a = 2;
    while (a >= 2) {
        a = (a > 1) ? a : 0;
        a = a * 1;
        a = 0;
    }
    return a + a + a;
}

void b() {
}

int main(void) {
    int res_a;
    void *p;
    int *x;
    x = malloc(sizeof(int) * 50);
    
    if (x == NULL) {
        return 1;
    }

    for (int b = 1; b >= 0; b++) {
        b += b + a();
    }
    
    if (b > 0) {
        x[b - 1]++;
    }
    
    free(x);
    
    x = NULL;

    for (res_a = a(); res_a < 50 && res_a < a(); res_a++) {
    }

    b();
    return 0;
}
