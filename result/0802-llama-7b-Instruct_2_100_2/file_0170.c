
#include <stdio.h>

int a() {
    int i = 0, j;
    while (i != 7) {
        i = (2 * i) + 1;
        if (i > 7) break;
    }
    j = i + 3;
    return j;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
