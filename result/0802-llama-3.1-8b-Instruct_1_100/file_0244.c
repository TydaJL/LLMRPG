
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void a() {
    char *str = (char *)malloc(100 * sizeof(char));
    if (str == NULL) {
        return;
    }

    strcpy(str, " ab # c \\n ");
    printf("%s", str);
    free(str);
}

int main() {
    a();
    return 0;
}
