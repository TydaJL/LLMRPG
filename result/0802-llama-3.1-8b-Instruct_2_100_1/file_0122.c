
#include <stdio.h>
#include <stdlib.h>

void a() {
    int *p, i;
    for(i = 100000000; i > 0; i--) 
        p = (int *)malloc(sizeof(int));
}

void b() {
    int i;
    int arr1[10] = {0}, arr2[1000] = {0};
    for(i = 1; i < 10; i++) 
        arr1[i - 1] *= arr2[i];
}

void d() {
    char c;
    int arr[100] = {0};
    int i;
    c = 'c';
    c = (char) malloc(sizeof(int));
    free(c);
    for(i = 0; i < 100; i++) 
        arr[i] = arr[i] * arr[i];
}

int main(void) {
    a();
    b();
    d();
    return 0;
}
