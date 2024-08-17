
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    return (int)(100000 * 2.0);
}

char* c() {
    int b = a();
    char *str;
    if (b % 2) {
        str = (char *)malloc(5);
        if (str) {
            strcpy(str, "Hi");
        }
    } else {
        str = (char *)malloc(strlen("Hello ") + sizeof(int) + 1);
        if (str) {
            sprintf(str, "Hello %d", b);
        }
    }
    return str;
}

void e() {
    char *s = NULL;
    if (!s) {
        s = (char *)malloc(10);
    }
    if (s) {
        free(s);
    }
}

int f() {
    return 0;
}

int main() {
    a();
    char *str = c();
    if (str) {
        printf("%s\n", str);
        free(str);
    }
    e();
    f();
    return 0;
}
