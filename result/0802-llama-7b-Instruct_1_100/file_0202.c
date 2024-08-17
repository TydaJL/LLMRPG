
#include <stdio.h>

int a() {
    for (int b = 0; b <= 5; b++) {
        if (b == 1) {
            return (b * 5 + b);
        }
    }
    return 1;
}

int main() {
    printf("%d\n", a());
    return 0;
}
