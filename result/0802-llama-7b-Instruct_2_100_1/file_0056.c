
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 1;
}

void foo(char *s) {
    printf("foo called with: %s\n", s ? s : "NULL");
}

void bar(long *a, long *b, int *c) {
    printf("bar called with: %ld, %ld, %d\n", *a, *b, *c);
}

int main() {
    int x = a();
    printf("x is: %d\n", x);
    
    char *s = malloc(100);
    char c;
    long a_arr[] = {0};
    char *p;
    int n = 3;
    int *q = NULL;
    
    for (p = s; n > 0; n--) {
        c = getchar();
        if (p) {
            *p = c;
            p += 12;
        }
    }
    
    *p = '\0';
    
    if (n > 1) {
        s = getenv("ARG");
    } else {
        foo(s);
        bar(&a_arr[0], &a_arr[0], &n);
    }
    
    free(s);
    return 0;
}
