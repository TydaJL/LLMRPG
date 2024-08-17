
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

void call_functions() {
    a();
}

int main() {
    int *array = malloc(50 * sizeof(int *));
    if (array == NULL) {
        return 1;
    }

    for (int x = 0; x < 50; x++) {
        array[x] = malloc(20 * sizeof(int));
        if (array[x] == NULL) {
            for (int k = 0; k < x; k++) {
                free(array[k]);
            }
            free(array);
            return 1;
        }
    }

    call_functions();

    for (int x = 0; x < 50; x++) {
        free(array[x]);
    }
    free(array);
    return 0;
}
