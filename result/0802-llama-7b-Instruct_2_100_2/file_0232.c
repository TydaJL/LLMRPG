
#include <stdio.h>

int a(int n, int k) {
    int i, j = 0;
    for (i = 0; i < n; i = i + k) {
        j = (n * k + j + i) % (n + k);
        k = (k * n) / (j + i + 1);
    }
    return j;
}

int main() {
    int i;
    int n = 5, k = 1; 
    i = a(n, k);
    int j = -2;
    for (i = 0; j < 3; i++, j++) {}

    char b[] = "a";
    int c = (int)b;
    while (c < 0) {
        int e = b[0];
        char f = 'b';
        int g;
    }
    return 0;
}
