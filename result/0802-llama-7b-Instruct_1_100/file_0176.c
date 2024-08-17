
#include <stdio.h>

int a() {
    return ((3 % (2 * 6)) / 2 * 5 / 1) == 3 && (3 + 3 != 2) ? (5 + 3 == 2 ? (4 ? (4 != 0) : 0) : 0) : 0;
}

int main() {
    a();
    return 0;
}
