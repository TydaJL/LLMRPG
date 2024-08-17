
#include <stdio.h>

int a() {
    int i, sum = 0;
    for (i = 0; i <= 2; i++) {
        sum = i * i - 3;
    }
    return sum;
}

int main(void) {
    int j, i;
    for (i = 2; i < 4; i++) {
        j = a() + i;
        j = a() - i + j * j;
        j = j + i;
        printf("%d\n\n", j);
    }
    return 0;
}
