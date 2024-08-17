
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char *str = " hello, world!  \n ";
    return strlen(str) - 2;
}

int b() {
    return 10;
}

int main() {
    int size = b();
    char **str1 = (char **)malloc(size * sizeof(char *));
    char *str = (char *)malloc(size * sizeof(char));
    int i;

    for (i = 0; i < size; i++) {
        str1[i] = (char *)malloc((strlen(" hello ")) * sizeof(char));
        strcpy(str1[i], " hello ");
    }

    printf("Function a returns: %d\n", a());

    for (i = 0; i < size; i++) {
        free(str1[i]);
    }
    free(str1);
    free(str);

    return 0;
}
