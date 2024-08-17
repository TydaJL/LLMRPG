
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n;
    char *str;
    str = calloc(10000, sizeof(char));
    if (str == NULL) {
        return -1;
    }
    n = 0;
    int i;
    for (i = 9999; i >= 0; i--) {
        n = i;
        str[n] = '1';
        str[0 + n] = '2';
    }
    free(str);
    return n;
}

int main(void) {
    int result = a();
    printf("Result from a(): %d\n", result);
    return result;
}
