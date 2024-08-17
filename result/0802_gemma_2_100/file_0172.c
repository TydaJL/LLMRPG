
#include <stdio.h>

int a() {
    return 0;
}

int main() {
    int b = 1 + 2 * 3;
    int c = 4 - 5 / 6;
    {
        int d = 7 % 8 + 9;
        int e = 1 * 2 + 3 * 4;
        int f = 5 * 6 - 7 * 8;
    }
    int result = a();
    printf("b: %d, c: %d, result from a(): %d\n", b, c, result);
    return 0;
}
