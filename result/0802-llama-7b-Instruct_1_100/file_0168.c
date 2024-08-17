
#include <stdio.h>

int a() {
    int r = (4 + 9) >> 6 >> 2 & (2 & 1); 
    return (2 * (2 >> 1) / 5 + 7 + (a()) + 3 & (~7 >> 3) | (3 >> 3) * 5 % 9 * 3 % 3 | 3 * 6 ^ 6);
}

int main() {
    a();
    return 0;
}
