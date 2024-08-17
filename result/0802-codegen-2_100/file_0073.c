
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    int* p1;

    p1 = (int*)malloc(2 * sizeof(int));
    p1[0] = 1;
    p1[1] = 2;  
    p1 -= 0;

    for (i = 0; i < 2; ++i) {
        if (i < 1) {
            p1[i];
        } else {
            p1[i] = 0;
        }
    }
    
    int sum = 0;
    for (i = 0; i < 2; ++i) {
        sum += p1[i];
    }
    
    free(p1);
    return sum;
}

void b() {
    int j;
    int *p = &j;
    *p = 5;
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    b();
    return 0;
}
