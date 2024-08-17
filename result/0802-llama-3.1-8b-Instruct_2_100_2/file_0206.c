
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* x = (int*)malloc(5 * sizeof(int));
    int* y = (int*)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        y[i] = i + 1;
    }
    int count = 0;
    while (count < 10 && y[count]) {
        count++;
    }
    free(x);
    free(y);
    return count;
}

void b(int z) {
    char* s = (char*)malloc(z);
    for (int i = 0; i < z; i++) {
        s[i] = 'a';
    }
    for (int i = z - 1; i >= 0; i--) {
    }
    free(s);
}

int c() {
    float* f = (float*)calloc(5, sizeof(float));
    for (int i = 0; i < 5; i++) {
        f[i] *= (2 + i);
    }
    free(f);
    return 1;
}

int main() {
    int resultA = a();
    printf("Result from a: %d\n", resultA);
    
    b(10);
    
    int resultC = c();
    printf("Result from c: %d\n", resultC);
    
    return 0;
}
