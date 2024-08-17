
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int n;
    int *arr = NULL;
    n = 10;
    arr = (int *)malloc(n * sizeof(int));
    int i;
    for (i = 1; ; ++i) {
        if ((i & (i - 1)) == 0)
            break;
        arr[i - 1] = (i * 3) % n;
    }
    free(arr);
    return 0;
}

int b(int *a, char **b) {
    int n = strlen(*b) + 1;
    char *c = (char *)malloc(n * sizeof(char));
    int sum = 0;
    for (int i = 0; i < strlen(*b); i++) {
        c[i] = (*b)[i];
        sum += (*b)[i];
    }
    c[strlen(*b)] = '\0';
    free(c);
    return sum;
}

int main(int argc, char **argv) {
    a();
    if (argc > 1) {
        int result = b(NULL, argv + 1);
        printf("Sum of ASCII values: %d\n", result);
    }
    return 0;
}
