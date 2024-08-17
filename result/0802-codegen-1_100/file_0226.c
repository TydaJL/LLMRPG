
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    int *p = malloc(sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    printf("Enter a number: ");
    scanf("%d", &i);

    *p = i;

    printf("The value entered is: %d at address: %p\n", *p, (void *)p);

    free(p);
    return i;
}

int main() {
    a();
    return 0;
}
