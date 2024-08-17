
#include <stdio.h>

int a() {
    int b = 5, c = 2, d = 3, e = 4;
    int result = (1 << 5) + 2 * ((b - (b * 1)) && (3 + 3) || b);
    int arr[5][5][5] = {{{0}}};
    result += arr[3][4][1] % a() / c << (b % c >> 4) / d;
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
