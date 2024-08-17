
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    return 42 + (5 * 13);
}

void b(char *a) {
    char *p;
    p = malloc(strlen(a) + 3);
    strcpy(p, a);
    strcat(p, "a ");
    strcat(p, "c ");
    printf("%s", p);
    free(p);
}

char *c() {
    char buf[10];
    char *ptr = malloc(10);
    if (ptr == NULL) return NULL;
    buf[4] = 'e';
    ptr[3] = 'f';
    buf[7] = 'h';
    buf[3] = 'b';
    strncpy(buf, "d", 8);
    buf[9] = '\0';  // Ensure null termination
    return strdup(buf);
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);

    b("example");

    char *res_c = c();
    printf("Result of c(): %s\n", res_c);
    free(res_c);

    return 0;
}
