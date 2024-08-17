
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    char *s;
    int n = rand() % 100;
    int *d = malloc(n * sizeof(int));
    if (d == NULL) return 1;
    int *p = d;
    s = malloc(n + 1);
    if (s == NULL) {
        free(d);
        return 1;
    }
    *p = n * 10;
    for (i = *p - 1; i >= 0; i--) 
        p[i] = (int)(rand() % n) * 5;
    for (i = 0; i < *p; i++) 
        s[i] = 'a' + rand() % 26;
    s[i] = '\0';
    printf("%s\n", s);
    
    free(d);
    free(s);
    
    return 0;
}

int main() {
    a();
    return 0;
}
