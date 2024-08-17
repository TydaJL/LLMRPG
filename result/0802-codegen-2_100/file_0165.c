
#include <stdio.h>
#include <stdlib.h>

void a() {
    char v1[] = { 'a', 'c', 'b', 'c', 'a', '\0', 'c', 'b', 'c', 'a', 'b', 'd', '\n', '\t', 'e', 'd', '\n', 'f', ' ', '\t' };
    char *s1 = (char *)malloc(4 * sizeof(char));
    s1[0] = 'a';
    s1[1] = 'b';
    s1[2] = '\0';
    for (int j = 0; j < 3; ++j) {
        printf("s1[%d] = %c\n", j, s1[j]);
    }
    free(s1);
}

void c() {
    char *p = (char *)malloc(10 * sizeof(char));
    free(p);
}

int main() {
    a();
    c();
    return 0;
}
