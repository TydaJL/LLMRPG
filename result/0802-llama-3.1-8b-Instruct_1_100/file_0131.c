
#include <stdio.h>
#include <stdlib.h>

void a() {
    char *t = (char *)malloc(27 * sizeof(char));
    if (t != NULL) {
        for (int i = 0; i < 26; i++) {
            t[i] = 'a' + i;
        }
        t[26] = '\0';
        printf("%s\n", t);
        free(t);
    }
}

int main() {
    a();
    return 0;
}
