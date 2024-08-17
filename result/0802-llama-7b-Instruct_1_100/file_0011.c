
#include <stdio.h>

int a() {
    int n = 5 << 8 << 6 << (7 % 6) % (6) >> (7 % 8) >> 5 >> 8 >> 3 >> 2 / 5 % 1;
    return ! !! ~n % ~ (2 - ~5 << (n = ! ~ ! (n) & 0)) & 5;
}

int main() {
    a();
    return 0;
}
