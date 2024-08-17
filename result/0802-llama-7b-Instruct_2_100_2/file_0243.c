
#include <stdio.h>
#include <stdlib.h>

int a() {
    size_t t = 10;
    int *arr = calloc(t, sizeof(int));
    if (arr) {
        for (int i = 0; i < t; i++) {
            arr[i] = i;
        }
        free(arr);
    }
    return t;
}

int main() {
    int a_val = 1;
    int b = 0, c = a_val * a_val * a_val, d = a_val * a_val * a_val * a_val * a_val * a_val * c;
    c = c / a_val;
    int e = 1; 
    e = e / e; 
    int f = a_val + b + c + d;
    int g = f;
    int j = c;
    int i = 0;
    
    if (e != 0) {
        j = j * e; 
    }
    
    int k = a_val;

    a();
    
    printf("a_val: %d, c: %d, d: %d, f: %d\n", a_val, c, d, f);
    return 0;
}
