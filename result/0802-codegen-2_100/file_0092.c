
#include <stdio.h>

int a() {
    printf("\nEnter a: ");
    int x, y, sum;
    scanf("%d", &x);
    sum = 0;
    for (y = x; y > 0; y /= 2) {
        sum = y + sum;
    }
    printf("\nsum: %d\n", sum);
    return 0;
}

int main() {
    a();
    return 0;
}
