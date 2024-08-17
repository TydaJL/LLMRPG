
#include <stdio.h>

int a() {
    int i, j, k = 0;
    for (i = 0; i < 5; i++) {
        if (i < 1) {
            k += (i + 1);
        } else {
            k += (4 / 3) * 1;
        }
        if ((k % 7 == 1) && (9 & 8)) {
            j = k;
        }
    }
    return k;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
