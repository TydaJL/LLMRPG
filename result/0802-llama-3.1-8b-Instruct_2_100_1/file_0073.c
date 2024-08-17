
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    return 1;
}

double b(int n) {
    double *p;
    p = malloc(sizeof(double));
    *p = 0.5;
    while (--n > a()) {
        p = realloc(p, (n + 1) * sizeof(double));
        for (int j = n; j > 0; j--) {
            *(p + n) = *(p + n) - *(p + n - 1);
            *(p + j) *= 2;
        }
    }
    double result = *p - n;
    free(p);
    return result;
}

int c(char *str) {
    int i = strlen(str);
    int count = 0;
    for (int j = 0; j < i; j++) {
        if (str[j] == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    int result_a = a();
    printf("Result of a(): %d\n", result_a);

    double result_b = b(5);
    printf("Result of b(5): %f\n", result_b);

    char test_str[] = "Hello World";
    int result_c = c(test_str);
    printf("Number of spaces in '%s': %d\n", test_str, result_c);

    return 0;
}
