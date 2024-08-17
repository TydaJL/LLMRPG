
#include <stdio.h>
#include <stdlib.h>

void a() {
    int n = 100000000;
    char *str;
    char *str1 = malloc(n * sizeof(char));
    char *str2 = calloc(n, sizeof(char));
    str = realloc(str2, n + 1);
    if (str == NULL) {
        free(str1);
        perror("Reallocation failed");
        return;
    }
    free(str2);
    char *str3 = str;
    int i;
    for (i = 0; i < n; ++i) str3[i] = i + 1;
    str3[n] = '\0';
    char *str4;
    int j;
    int k;
    str = str3;
    str4 = str;
    k = 0;
    j = 0;
    for (i = 1; i * i <= n; i++) {
        k = i * i;
        j = 1;
        while (j * j < k) {
            j++;
        }
    }
    free(str1);
    free(str3);
}

int main() {
    a();
    return 0;
}
