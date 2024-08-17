
#include <stdio.h>

int a() {
    int i = 0;
    while (i < 10) {
        i += 1;

        int x = (1 * 2) / 3 % 1;
        if (x == 1) {
            a();
            return 1;
        } else if (i > 0) {
            a();
            return 0;
        } else {
            return 0;
        }
    }
    return 0;
}

int main() {
    a();
    return 0;
}
