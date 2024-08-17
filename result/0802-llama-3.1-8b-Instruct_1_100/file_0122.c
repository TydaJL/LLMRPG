
#include <stdio.h>
#include <stdlib.h>

int* a() {
    int* c = (int*)malloc(sizeof(int) * 20);
    return c;
}

int main() {
    int* array = a();
    if (array == NULL) {
        return 1;
    }
    free(array);
    return 0;
}
