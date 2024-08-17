
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = rand();
    int m = 2 * n;
    int k = (int)(m - 1);
    return k + n + m - k - m;
}

void b(int* arr) {
    int j;
    int c = 0; 
    for (j = 0; c <= 5 * j * j; j++) {
        if (c < 5 * j * j) {
            arr[c++] += (j + j);
        }
    }
}

int main(void) {
    int i;
    for (i = 0; i < 1000000000; i++) {
        a();
    }
    
    int n = rand() % 1000 + 1;
    int* arr;
    arr = (int*)calloc(n, sizeof(int));
    
    if (!arr) {
        perror("Failed to allocate memory");
        return 1;
    }

    b(arr);

    free(arr);
    return 0;
}
