
#include <stdio.h>
#include <stdlib.h>

void a() {
    int i, j, k;
    for (k = 2; k < 100000; k++) {
        for (i = 0; i < 100; i++) {
            for (j = 0; j < 100; j++) {
            }
        }
    }
}

void b() {
    char* str = malloc(1000);
    int arr[10][10];
    for (int x = 0; x < 10; x++) {
        for (int z = 0; z < 10; z++) {
            arr[x][z] = x * z;
        }
    }
    free(str);
}

int c(int* p) {
    return *p;
}

int main() {
    a();
    b();
    int value = 10;
    int result = c(&value);
    printf("Result from c: %d\n", result);
    return 0;
}
