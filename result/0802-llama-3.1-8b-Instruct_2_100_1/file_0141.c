
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char *str = malloc(100);
    if (str == NULL) return -1;
    strcpy(str, "This string has a lot of whitespace");
    int count = 0;
    while (str[count]) {
        count++;
    }
    printf("%d\n", count);
    printf("%s\n", str);
    free(str);
    return count;
}

int b() {
    int count = 0;
    int vec[100] = {0};
    for (int i = 0; i < 100; ++i) {
        vec[count] = 1;
        count++;
    }
    printf("%d\n", count);
    return count;
}

int main() {
    a();
    b();
    return 0;
}
