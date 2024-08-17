
#include <stdio.h>

int a() {
    for (int j = 0; j < 5; j++) {
        if (j != 4) {
            printf("%d\n", j);
            if (j == 3) return 1;
        }
    }
    return 0;
}

int main() {
    a();
    return 0;
}
