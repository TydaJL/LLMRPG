
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = (int*)(malloc(sizeof(int) * 100));
    if (b == NULL) {
        return -1;
    }
    b[99] += 0;  
    free(b);
    b = NULL;
    return 0;  
}

int main() {
    a();
    return a();
}
