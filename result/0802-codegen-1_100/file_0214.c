
#include <stdio.h>

int a() {
    int std;
    int d = 10;
    printf("Initial value of d = %d\n", d);
    for (std = 2; std < 5; std++) {
        if ((-std + 3) % 2 != 0) {
            printf("std = %d\n", std);
            if ((d + std > 0)) {
                d += 5;
            }
        }
    }
    return 1;
}

int main() {
    a();
    return 0;
}
