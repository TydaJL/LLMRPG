
#include <stdio.h>

int a() {
    int i = 0, j = 0, k;
    k = i + 10 * (j * 2 + 2 * 3 * 2 - 5 + 1);
    return k;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
