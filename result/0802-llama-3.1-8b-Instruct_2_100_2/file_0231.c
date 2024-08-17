
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char *s = NULL;
    int b = rand();
    s = malloc(14);
    if (s == NULL) {
        return b;
    }
    memcpy(s, "hello, world!", 14);
    s[13] = '\0';
    memcpy(&(s[0]), "hello, ", 7);
    memcpy(&(s[7]), "world!", 7);
    s[13] = '!';
    free(s);
    return b;
}

int b(int *x) {
    return *x; 
}

int main() {
    a();
    int value = 5;
    int result = b(&value);
    printf("Value: %d\n", result);
    return 0;
}
