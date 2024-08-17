
#include <stdio.h>
#include <stdlib.h>

void a() {
    int num_elements;
    printf("Enter the number of elements: ");
    scanf("%d", &num_elements);
    
    int *numbers = (int *)malloc(num_elements * sizeof(int));
    if (numbers == NULL) {
        printf("Memory error\n");
        return;
    }

    for (int i = 0; i < num_elements; ++i) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        numbers[i] += 2;
    }

    for (int i = 0; i < num_elements; ++i) {
        printf("Modified number %d: %d\n", i + 1, numbers[i]);
    }

    free(numbers);
}

int main() {
    a();
    return 0;
}
