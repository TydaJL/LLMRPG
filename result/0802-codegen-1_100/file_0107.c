
#include <stdio.h>

int a() {
    int sum = 2 % 6;
    sum = 7 + 5;
    sum = sum % 8 + 10;
    int c = 9 / 2;
    int d = 11;
    int e = 14 * 12;
    int condition = ((e == 5) && (1 - 3 < 17)) || (13 % 20 * 19 / 22);
    return sum + c + d + e + condition;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
