
#include <stdio.h>
#include <stdlib.h>

void a() {
    char *b;
    void *c = malloc(2);
    
    if (c != NULL) {
        b = malloc(3 + 5);
        if (b != NULL) {
            size_t offset = (size_t)b - (size_t)c;
            c = (char *)((size_t)c + offset);
            free(b);
        }
        free(c);
    }
}

int main() {
    a();
    return 0;
}
