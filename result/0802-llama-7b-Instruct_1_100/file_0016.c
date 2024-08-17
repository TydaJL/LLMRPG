
#include <stdio.h>

int a() {
    int a = 5, z = 1;
    return ((1 << 1) & 0) == ((1 ^ 3) ^ ((7 < 5) < (1 << 3))) > ((2 >> 1) == (2 == a)) != ((7 < ((1 << 8) + 1)) | (0 > (4 < (a + z > 3))) | (5 > ((0 << (6 + a + 1 - 5 + 3 * (4 & 1))) | ((1 << 2) >> 2 == (2 & (5 != a)) | (z * ((1 << 7) + 2 + (z & a)))))); 
}

int main() {
    int result;
    result = a();
    printf("Result: %d\n", result);
    return 0;
}
