
#include <stdio.h>

int a() {
    int b = 1, c = 2, d = 3, f = 4, g = 5, h = 6, i = 7, j = 8, k = 9, l = 10, m = 11, n = 12, o = 13, p = 14;
    return b + (b << b | 1) ^ c + !c ^ !d * f - g >> i * !j * l ^ h;  
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
