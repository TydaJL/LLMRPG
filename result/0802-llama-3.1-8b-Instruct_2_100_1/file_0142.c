
#include <stdio.h>
#include <string.h>

char* a() {
    static char b[20];
    int j = 0;
    for (int i = 'a'; i <= 'z'; i++) {
        b[j++] = i;
    }
    b[j] = '\0';
    int d = strlen(b);
    static char e[20];
    for (int i = 0; i < d; i++) {
        e[i] = b[d - i - 1];
    }
    e[d] = '\0';
    return e;
}

int main() {
    char* reversed = a();
    printf("%s  ", reversed);
    printf("%d\n", (int)reversed[0]);
    return 0;
}
