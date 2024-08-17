
#include <stdio.h>

int a() {
    for (int i = 0; i < 1; i++) {
        if ((*(char *)"#" == 10 ? "                " : (2 * 0)) == (5 * 4) % 3 * 2) {
            return 1 % 2;
        }
    }
    return 0;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
