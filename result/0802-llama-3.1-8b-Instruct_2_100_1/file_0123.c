
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *str = (char *)malloc(20);
    if (str == NULL) return -1;
    for (int i = 0; i < 1000000; i++) {
        int x = rand();
        sprintf(str, "%d", x);
        for (int k = 0; k <= i; k++) {
            if (i * k < 20) str[i * k] = '0';
            if (i * k - k < 20) str[i * k - k] = '0';
        }
    }
    free(str);
    return 0;
}

void b() {
    int n;
    char *str = (char *)malloc(100000 * sizeof(char));
    if (str == NULL) return;
    n = rand();
    for (int j = 0; j < 1000000; j++) {
        str[j] = (char)(n % 256);
        n /= 256;
        if (n == 0) break;
    }
    free(str);
}

int main() {
    a();
    b();
    return 0;
}
