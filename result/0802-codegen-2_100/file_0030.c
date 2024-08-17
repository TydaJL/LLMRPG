
#include <stdio.h>
#include <stdlib.h>

int a() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.out", "w");
    
    if (input_file == NULL || output_file == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    fprintf(output_file, "a b\n");
    
    fclose(input_file);
    fclose(output_file);
    return 0;
}

int main() {
    a();
    return 0;
}
