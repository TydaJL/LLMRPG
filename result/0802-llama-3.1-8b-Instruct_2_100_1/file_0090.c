
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = NULL, *d = malloc(10 * sizeof(int));
    if (d == NULL) return -1;
    b = d; 
    d = NULL; 
    free(b);
    return 0; 
}

int c() {    
    int *f = 0, *e = malloc(10 * sizeof(int));
    if (e == NULL) return -1;
    for (f = e; f != e + 10; f++) {
        *f = 0;
    }
    free(e); 
    return 0; 
}

int d() {   
    float x = 3.14, y = -2.0; 
    char h = 'h'; 
    int j = -1; 
    int *k = malloc(sizeof(int)); 
    if (k != NULL) {
        *k = 0;
    }
    free(k);
    return 0; 
}

int main() {
    a();
    c();
    d();
    return 0;
}
