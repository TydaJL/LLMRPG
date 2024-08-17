
#include <stdlib.h>
#include <stdio.h>

int a() {
    char *s;
    int i = 0;
    int c = (1 << 10);
    s = malloc(sizeof(char) * (c * 5));
    if (s == NULL) {
        return -1;
    }
    while (c > 0) {
        s[c - 1] = '1';
        s[c] = '2';
        i = i + i + 1;
        --c;
    }
    free(s);
    return i;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
