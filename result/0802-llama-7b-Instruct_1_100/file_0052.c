
#include <stdio.h>

int a() {
    int b = 7 << 7;
    while (b > (3 >> 6)) {
        return 7;
    }
    b = (b >> (5 + 2)) ^ 2 | (4 * 7) - (4 >> 8);
    while (b > ((5 << 1) + 4)) {
        return (3 | (4 ^ 5) + (3 | (4 * 2) - (4 >> 1) | (3 / 2) - (2 >> 4) << 6 >> 4)) | 7 | 8 | (9 * (5 >> 2)));
    }
    return 0;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
