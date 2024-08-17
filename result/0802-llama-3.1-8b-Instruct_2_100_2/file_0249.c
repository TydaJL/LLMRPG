
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 0;
    char* str = malloc(10);
    if (str == NULL) return -1;
    str[5] = 'h';
    str[6] = 'i';
    for(n = 0; n <= 5; n++)
        str[n] = ' ';
    str[7] = 'l';
    free(str);
    str = NULL;
    return -n;
}

int b() {
    return a();
}

int c(int n) {
    int m = a();
    char* str = malloc(100);
    if (str == NULL) return m;
    int count = (n - 1) / 2;
    while (count < n) {
        str[count] = ' ';
        count++;
    }
    str[(n - count)] = ' ';
    free(str);
    return m;
}

int main() {
    a();
    b();
    c(10);
    return 0;
}
