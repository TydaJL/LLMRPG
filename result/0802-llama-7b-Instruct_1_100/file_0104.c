
#include <stdio.h>

void a() {
    int n, s, i, j, m = 0;
    for (n = 5; n > 0; n--) {
        for (s = n; s >= 0; s--) {
            m = s * 5;
            for (i = 0; i <= s; i++) {
                for (j = 0; j < n; j++) {
                    printf("i: %d, s: %d, m: %d, n: %d\n", i, s, m, n);
                }
            }
        }
    }
}

int main() {
    a();
    return 0;
}
