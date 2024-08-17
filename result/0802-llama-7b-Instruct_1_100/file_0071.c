
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

int* create_array(int length) {
    int* array = (int*)malloc(length * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    return array;
}

void fill_array(int* array, int length) {
    for (int i = 0; i < length; i++) {
        array[i] = i + 1;
    }
}

void print_array(int* array, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int length = 5;
    int* array = create_array(length);
    fill_array(array, length);
    print_array(array, length);
    free(array);
    a();
    return 0;
}
