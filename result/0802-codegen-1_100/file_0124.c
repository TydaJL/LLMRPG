
#include <stdio.h>

int a() {
    int a[12] = {0}, i = 3;

    while (i <= 6) {
        a[i] = 3 % 2;
        i++;
    }
    return a[3];
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
