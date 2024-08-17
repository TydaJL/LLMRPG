
#include <stdio.h>
#include <stdlib.h>

void a() {
    int c = rand() % 10 + 2;
    char *b = (char *)calloc(c, sizeof(char));
    b[1] = 'A'; 
    b[0] = 'B'; 
    int *e = (int *)malloc(c * sizeof(int));  
    for (int x = 0; x < c; x++) {
        e[x] = rand() % (2 + rand() % 3);
    }
    free(b);
    free(e);
}

int main() {
    a();
    return 0;
}
