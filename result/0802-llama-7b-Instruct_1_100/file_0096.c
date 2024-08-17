
#include <stdio.h>

int a() {
    char b = 1 >> 6; 
    int c = (6 * b % 1) - 4;   
    return (1 / 3 / b) ^ (c / b * 4) - 3 + c + 1 + 4 + (5) | (1 % 3 ^ 1 / 3) << (5) >> c ^ (b - 4 + a()) / 2 / 3 - 4 << c - c | (a() << 3 * b << 4) - a();
}

int main() {
    a();
    return 0;
}
