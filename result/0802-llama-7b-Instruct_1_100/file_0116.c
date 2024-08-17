
#include <stdio.h>
#include <stdlib.h>

int* a() {
    int size = 5;
    int* arr = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        arr[i] = i * i;
    }
    return arr;
}

void b() {
    printf("Function b called\n");
}

int main() {
    int* array = a();
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    
    b();
    return 0;
}
