
#include <stdio.h>
#include <stdlib.h>

int* a() {
    int* p = (int*)malloc(100 * sizeof(int));
    if (!p) return NULL;
    for (int i = 99; i >= 0; --i) {
        p[i] = i;
    }
    return p;
}

void b() {
    static char c[100000] = {0};
    static int i = 0;
    while (i < 99999) {
        c[i] = (char)i;
        i++;
    }
    c[i] = '\0';
}

int c() {
    int a[100000];
    for (int j = 0; j < 100000; j++) {
        a[j] = j;
    }
    return 0;
}

int main(void) {
    int* array_a = a();
    if (array_a) {
        for (int i = 0; i < 100; i++) {
            printf("%d ", array_a[i]);
        }
        free(array_a);
    }
    b();
    c();
    return 0;
}
