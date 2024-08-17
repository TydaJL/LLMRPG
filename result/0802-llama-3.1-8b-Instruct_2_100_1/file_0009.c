
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    return (int)1;
}

int main() {
    int x = a(); 
    x = x - x;
    int *b = (int *)(&x + 1);
    
    char *c = malloc(strlen("hello ") + 1);
    strcpy(c, "hello ");
    int d;
    
    d = strlen(c);
    c = realloc(c, d + 1);
    
    for (;;) {
        if ((int)(c[0]) < 'A')
            break;
        c[--d];
    }
    
    free(c);
    return 0;
}
