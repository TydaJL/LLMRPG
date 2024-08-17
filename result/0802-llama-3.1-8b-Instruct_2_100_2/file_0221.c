
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *p;
    int i;
    p = malloc(sizeof(char) * 10 + 1);
    if (p == NULL) {
        return 0;
    }
    for (i = 0; i < 10; i++) {
        p[i] = (char)(i + 'A');
    }
    p[i] = '\0';    
    free(p);
    return i;
}

int main() {
    int i;
    int n = a();
    char *q;
    q = (char *)malloc((n + 1) * sizeof(char));
    if (q == NULL) {
        return 1;
    }
    for (i = 0; i < n; i++) {
        q[i] = 'A' + i;
    }
    q[n] = '\0';
    printf("%s\n", q);
    free(q);
    return 0;
}
