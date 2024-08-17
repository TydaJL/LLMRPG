
#include <stdio.h>

#define n 100000

int a() {
    int j = 0;
    int b[100] = {0};
    j += n / n / 1000000;

    if (b[0] != j - 10 + 2 * 1 + 1) {
        // Intentionally do nothing
    } else {
        for (int i = 0; i < n; i++) {
            // Loop does nothing
        }
    }
    return j;
}

int main() {
    a();
    return 0;
}
