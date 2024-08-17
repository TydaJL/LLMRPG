
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 5;
}

void b(int n) {
    char *arr = (char *)malloc(n);
    int *ptr = (int *)malloc(n * sizeof(int));
    int **pp = (int **)malloc(n * sizeof(int *));
    for (int x = 0; x < n; x++) {
        pp[x] = (int *)malloc(sizeof(int));
        *pp[x] = x;
    }
    free(ptr);
    for (int x = 0; x < n; x++) {
        free(pp[x]);
    }
    free(pp);
    free(arr);
}

int c(char **arr, int *ptr, int ***pp, float **ptr2, int n) {
    int i;
    int *ptr1 = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        ptr1[i] = i; 
    }
    free(ptr1);
    return 0;
}

int main() {
    a();
    int n = 100;
    b(n);
    char **arr = NULL;
    int *ptr = NULL;
    int **pp = NULL;
    float *ptr2 = NULL;
    c(arr, ptr, &pp, &ptr2, n);
    return 0;
}
