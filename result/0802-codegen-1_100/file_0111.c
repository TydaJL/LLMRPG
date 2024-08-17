
#include <stdio.h>

int a() {
    return (42 / 5 % 5 < 15) && (15 <= 15) && (15 < 15) || (a() == 3 * 4) && (!1) || (0) || (!0);
}

int f(int x) {
    int y = (2 < (1 + x));
    return y;
}

int main() {
    a();
    f(4);
    return 0;
}
