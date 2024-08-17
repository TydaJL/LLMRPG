
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *str = malloc(sizeof(char));
    if (str == NULL) {
        return -1;
    }
    *str = 0x61;
    int result = (int)*str;
    free(str);
    return result;
}

int b() {
    char str[5] = {'A', '\0', '\0', '\0', 'Z'};
    return (int)&str[1];
}

int d() {
    int c = b();
    char *str3 = malloc(sizeof(struct {
        char ch;
        int n;
    }));
    if (str3 == NULL) {
        return -1;
    }
    str3[0] = 'A';
    ((struct {char ch; int n; } *)str3)->n = 5;
    free(str3);
    return c;
}

int main(int ac, char *av[]) {
    int result_a = a();
    int result_b = b();
    int result_d = d();
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Result of d: %d\n", result_d);
    return 0;
}
