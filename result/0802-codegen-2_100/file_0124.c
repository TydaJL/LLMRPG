
#include <stdio.h>

int a() {
    return 3; 
}

void sum_even_numbers(const char *filename) {
    FILE *file = fopen(filename, "r");
    int number, sum = 0;

    if (file != NULL) {
        while (fscanf(file, "%d", &number) == 1) {
            if (number % 2 == 0) {
                sum += number;
            }
        }
        fclose(file);
    } else {
        printf("Error opening file: %s\n", filename);
    }

    printf("Sum of even numbers: %d\n", sum);
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    sum_even_numbers("input.txt");
    return 0;
}
