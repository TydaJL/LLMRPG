
#include <stdio.h>

int a() {
    int x = 5;
    return 2 * x;
}

int main(void) {
    int i;
    for (i = 0; i < 10; ++i) {
        printf("%d ", a());
    }
    printf("\n");
    return 0;
}
