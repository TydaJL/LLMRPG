
#include <stdio.h>
#include <stdlib.h>

void print_message() {
    printf("Hello, World!\n");
}

int allocate_and_print() {
    char **str = malloc(4 * sizeof(char *));
    for (int i = 0; i < 4; i++) {
        str[i] = malloc(20 * sizeof(char));
        snprintf(str[i], 20, "String %d", i);
        printf("%s\n", str[i]);
    }
    for (int i = 0; i < 4; i++) {
        free(str[i]);
    }
    free(str);
    return 0;
}

int main() {
    print_message();
    allocate_and_print();
    return 0;
}
